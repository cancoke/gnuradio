include(GrPython)

macro(GR_PYBIND_MAKE name updir files) 

configure_file(${CMAKE_SOURCE_DIR}/docs/doxygen/pydoc_macros.h ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

pybind11_add_module(${name}_python ${files})
    
if(ENABLE_DOXYGEN)
    add_custom_command( 
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/docstring_status
        COMMAND python3 ${CMAKE_SOURCE_DIR}/docs/doxygen/update_pydoc.py "sub"
        "--json_path" ${CMAKE_BINARY_DIR}/docs/doxygen/gnuradio_docstrings.json
        "--bindings_dir" ${CMAKE_CURRENT_SOURCE_DIR}
        "--output_dir" ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Adding docstrings into ${name} pybind headers ..."
        DEPENDS gnuradio_docstrings)
    add_custom_target(${name}_docstrings ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/docstring_status)
else(ENABLE_DOXYGEN)
    add_custom_command( 
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/docstring_status
        COMMAND python3 ${CMAKE_SOURCE_DIR}/docs/doxygen/update_pydoc.py "copy"
        "--bindings_dir" ${CMAKE_CURRENT_SOURCE_DIR}/docstrings
        "--output_dir" ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Copying ${name} docstring templates as pybind headers ...")
    add_custom_target(${name}_docstrings ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/docstring_status)
endif(ENABLE_DOXYGEN)

target_include_directories(${name}_python PUBLIC
    ${CMAKE_CURRENT_BINARY_DIR}
    ${PYTHON_NUMPY_INCLUDE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/${updir}/lib
    ${CMAKE_CURRENT_SOURCE_DIR}/${updir}/include
    ${PYBIND11_INCLUDE_DIR}
)
target_link_libraries(${name}_python PUBLIC ${Boost_LIBRARIES} ${PYTHON_LIBRARIES} gnuradio-${name})
target_compile_options(${name}_python PRIVATE -Wno-unused-variable) # disable warnings for docstring templates
add_dependencies(${name}_python ${name}_docstrings)

endmacro(GR_PYBIND_MAKE)