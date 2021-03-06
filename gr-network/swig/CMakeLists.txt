# Copyright 2020 Free Software Foundation, Inc.
#
# This file was generated by gr_modtool, a tool from the GNU Radio framework
# This file is a part of gr-network
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

include(GrSwig)
include(GrPython)

########################################################################
# Setup swig generation
########################################################################
set(GR_SWIG_INCLUDE_DIRS $<TARGET_PROPERTY:runtime_swig,INCLUDE_DIRECTORIES>)
set(GR_SWIG_TARGET_DEPS runtime_swig)

set(GR_SWIG_LIBRARIES gnuradio-network)

set(GR_SWIG_DOC_FILE ${CMAKE_CURRENT_BINARY_DIR}/network_swig_doc.i)
set(GR_SWIG_DOC_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/../include/gnuradio/network)
set(GR_SWIG_DOCS_TARGET_DEPS runtime_swig_swig_doc)

set(GR_SWIG_LIBRARIES gnuradio-network)
GR_SWIG_MAKE(network_swig network_swig.i)

########################################################################
# Install the build swig module
########################################################################
GR_SWIG_INSTALL(
    TARGETS network_swig 
    DESTINATION ${GR_PYTHON_DIR}/gnuradio/network
)

########################################################################
# Install swig .i files for development
########################################################################
install(
    FILES
    network_swig.i
    ${CMAKE_CURRENT_BINARY_DIR}/network_swig_doc.i
    DESTINATION ${GR_INCLUDE_DIR}/gnuradio/swig
)
