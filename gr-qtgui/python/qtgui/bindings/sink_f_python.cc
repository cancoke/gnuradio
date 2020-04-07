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

#include <gnuradio/qtgui/utils.h>
#include <qwt_legend.h>
#include <qwt_painter.h>
#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_zoomer.h>
#include <qwt_scale_engine.h>
#include <qwt_scale_widget.h>
#include <qwt_symbol.h>

#include <gnuradio/qtgui/sink_f.h>
// pydoc.h is automatically generated in the build directory
#include <sink_f_pydoc.h>

void bind_sink_f(py::module& m)
{

    using sink_f    = ::gr::qtgui::sink_f;


    py::class_<sink_f, gr::block, gr::basic_block,
        std::shared_ptr<sink_f>>(m, "sink_f", D(sink_f))

        .def(py::init(&sink_f::make),
           py::arg("fftsize"),
           py::arg("wintype"),
           py::arg("fc"),
           py::arg("bw"),
           py::arg("name"),
           py::arg("plotfreq"),
           py::arg("plotwaterfall"),
           py::arg("plottime"),
           py::arg("plotconst"),
           py::arg("parent") = __null,
           D(sink_f,make)
        )
        




        .def("exec_",&sink_f::exec_,
            D(sink_f,exec_)
        )


        .def("qwidget",&sink_f::qwidget,
            D(sink_f,qwidget)
        )


        // .def("pyqwidget",&sink_f::pyqwidget,
        //     D(sink_f,pyqwidget)
        // )
        // For the sip conversion to python to work, the widget object
        // needs to be explicitly converted to Long
        .def(
            "pyqwidget",
            [](std::shared_ptr<sink_f> p) {
                return PyLong_AsLong(p->pyqwidget());
            },
            D(sink_f,pyqwidget)
            )



        .def("set_fft_size",&sink_f::set_fft_size,
            py::arg("fftsize"),
            D(sink_f,set_fft_size)
        )


        .def("fft_size",&sink_f::fft_size,
            D(sink_f,fft_size)
        )


        .def("set_frequency_range",&sink_f::set_frequency_range,
            py::arg("centerfreq"),
            py::arg("bandwidth"),
            D(sink_f,set_frequency_range)
        )


        .def("set_fft_power_db",&sink_f::set_fft_power_db,
            py::arg("min"),
            py::arg("max"),
            D(sink_f,set_fft_power_db)
        )


        .def("enable_rf_freq",&sink_f::enable_rf_freq,
            py::arg("en"),
            D(sink_f,enable_rf_freq)
        )


        .def("set_update_time",&sink_f::set_update_time,
            py::arg("t"),
            D(sink_f,set_update_time)
        )

        ;




}







