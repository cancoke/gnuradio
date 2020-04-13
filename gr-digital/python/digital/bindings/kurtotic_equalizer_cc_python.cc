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

#include <gnuradio/digital/kurtotic_equalizer_cc.h>
// pydoc.h is automatically generated in the build directory
#include <kurtotic_equalizer_cc_pydoc.h>

void bind_kurtotic_equalizer_cc(py::module& m)
{

    using kurtotic_equalizer_cc    = ::gr::digital::kurtotic_equalizer_cc;


    py::class_<kurtotic_equalizer_cc, gr::sync_decimator,
        std::shared_ptr<kurtotic_equalizer_cc>>(m, "kurtotic_equalizer_cc", D(kurtotic_equalizer_cc))

        .def(py::init(&kurtotic_equalizer_cc::make),
           py::arg("num_taps"),
           py::arg("mu"),
           D(kurtotic_equalizer_cc,make)
        )
        




        .def("gain",&kurtotic_equalizer_cc::gain,
            D(kurtotic_equalizer_cc,gain)
        )


        .def("set_gain",&kurtotic_equalizer_cc::set_gain,
            py::arg("mu"),
            D(kurtotic_equalizer_cc,set_gain)
        )

        ;




}






