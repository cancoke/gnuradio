/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/repeat.h>

void bind_repeat(py::module& m)
{
    using repeat    = gr::blocks::repeat;


    py::class_<repeat,gr::sync_interpolator, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<repeat>>(m, "repeat")

        .def(py::init(&repeat::make),
           py::arg("itemsize"), 
           py::arg("repeat") 
        )
        

        .def("interpolation",&repeat::interpolation)
        .def("set_interpolation",&repeat::set_interpolation,
            py::arg("interp") 
        )
        ;


} 