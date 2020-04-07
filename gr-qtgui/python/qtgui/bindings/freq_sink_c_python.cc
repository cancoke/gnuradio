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

#include <gnuradio/qtgui/freq_sink_c.h>
// pydoc.h is automatically generated in the build directory
#include <freq_sink_c_pydoc.h>

void bind_freq_sink_c(py::module& m)
{

    using freq_sink_c    = ::gr::qtgui::freq_sink_c;


    py::class_<freq_sink_c, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<freq_sink_c>>(m, "freq_sink_c", D(freq_sink_c))

        .def(py::init(&freq_sink_c::make),
           py::arg("fftsize"),
           py::arg("wintype"),
           py::arg("fc"),
           py::arg("bw"),
           py::arg("name"),
           py::arg("nconnections") = 1,
           py::arg("parent") = __null,
           D(freq_sink_c,make)
        )
        




        .def("exec_",&freq_sink_c::exec_,
            D(freq_sink_c,exec_)
        )


        .def("qwidget",&freq_sink_c::qwidget,
            D(freq_sink_c,qwidget)
        )


        // .def("pyqwidget",&freq_sink_c::pyqwidget,
        //     D(freq_sink_c,pyqwidget)
        // )
        // For the sip conversion to python to work, the widget object
        // needs to be explicitly converted to Long
        .def(
            "pyqwidget",
            [](std::shared_ptr<freq_sink_c> p) {
                return PyLong_AsLong(p->pyqwidget());
            },
            D(freq_sink_c,pyqwidget)
            )



        .def("set_fft_size",&freq_sink_c::set_fft_size,
            py::arg("fftsize"),
            D(freq_sink_c,set_fft_size)
        )


        .def("fft_size",&freq_sink_c::fft_size,
            D(freq_sink_c,fft_size)
        )


        .def("set_fft_average",&freq_sink_c::set_fft_average,
            py::arg("fftavg"),
            D(freq_sink_c,set_fft_average)
        )


        .def("fft_average",&freq_sink_c::fft_average,
            D(freq_sink_c,fft_average)
        )


        .def("set_fft_window",&freq_sink_c::set_fft_window,
            py::arg("win"),
            D(freq_sink_c,set_fft_window)
        )


        .def("fft_window",&freq_sink_c::fft_window,
            D(freq_sink_c,fft_window)
        )


        .def("set_frequency_range",&freq_sink_c::set_frequency_range,
            py::arg("centerfreq"),
            py::arg("bandwidth"),
            D(freq_sink_c,set_frequency_range)
        )


        .def("set_y_axis",&freq_sink_c::set_y_axis,
            py::arg("min"),
            py::arg("max"),
            D(freq_sink_c,set_y_axis)
        )


        .def("set_update_time",&freq_sink_c::set_update_time,
            py::arg("t"),
            D(freq_sink_c,set_update_time)
        )


        .def("set_title",&freq_sink_c::set_title,
            py::arg("title"),
            D(freq_sink_c,set_title)
        )


        .def("set_y_label",&freq_sink_c::set_y_label,
            py::arg("label"),
            py::arg("unit"),
            D(freq_sink_c,set_y_label)
        )


        .def("set_line_label",&freq_sink_c::set_line_label,
            py::arg("which"),
            py::arg("label"),
            D(freq_sink_c,set_line_label)
        )


        .def("set_line_color",&freq_sink_c::set_line_color,
            py::arg("which"),
            py::arg("color"),
            D(freq_sink_c,set_line_color)
        )


        .def("set_line_width",&freq_sink_c::set_line_width,
            py::arg("which"),
            py::arg("width"),
            D(freq_sink_c,set_line_width)
        )


        .def("set_line_style",&freq_sink_c::set_line_style,
            py::arg("which"),
            py::arg("style"),
            D(freq_sink_c,set_line_style)
        )


        .def("set_line_marker",&freq_sink_c::set_line_marker,
            py::arg("which"),
            py::arg("marker"),
            D(freq_sink_c,set_line_marker)
        )


        .def("set_line_alpha",&freq_sink_c::set_line_alpha,
            py::arg("which"),
            py::arg("alpha"),
            D(freq_sink_c,set_line_alpha)
        )


        .def("set_trigger_mode",&freq_sink_c::set_trigger_mode,
            py::arg("mode"),
            py::arg("level"),
            py::arg("channel"),
            py::arg("tag_key") = "",
            D(freq_sink_c,set_trigger_mode)
        )


        .def("title",&freq_sink_c::title,
            D(freq_sink_c,title)
        )


        .def("line_label",&freq_sink_c::line_label,
            py::arg("which"),
            D(freq_sink_c,line_label)
        )


        .def("line_color",&freq_sink_c::line_color,
            py::arg("which"),
            D(freq_sink_c,line_color)
        )


        .def("line_width",&freq_sink_c::line_width,
            py::arg("which"),
            D(freq_sink_c,line_width)
        )


        .def("line_style",&freq_sink_c::line_style,
            py::arg("which"),
            D(freq_sink_c,line_style)
        )


        .def("line_marker",&freq_sink_c::line_marker,
            py::arg("which"),
            D(freq_sink_c,line_marker)
        )


        .def("line_alpha",&freq_sink_c::line_alpha,
            py::arg("which"),
            D(freq_sink_c,line_alpha)
        )


        .def("set_size",&freq_sink_c::set_size,
            py::arg("width"),
            py::arg("height"),
            D(freq_sink_c,set_size)
        )


        .def("enable_menu",&freq_sink_c::enable_menu,
            py::arg("en") = true,
            D(freq_sink_c,enable_menu)
        )


        .def("enable_grid",&freq_sink_c::enable_grid,
            py::arg("en") = true,
            D(freq_sink_c,enable_grid)
        )


        .def("enable_autoscale",&freq_sink_c::enable_autoscale,
            py::arg("en") = true,
            D(freq_sink_c,enable_autoscale)
        )


        .def("enable_control_panel",&freq_sink_c::enable_control_panel,
            py::arg("en") = true,
            D(freq_sink_c,enable_control_panel)
        )


        .def("enable_max_hold",&freq_sink_c::enable_max_hold,
            py::arg("en"),
            D(freq_sink_c,enable_max_hold)
        )


        .def("enable_min_hold",&freq_sink_c::enable_min_hold,
            py::arg("en"),
            D(freq_sink_c,enable_min_hold)
        )


        .def("clear_max_hold",&freq_sink_c::clear_max_hold,
            D(freq_sink_c,clear_max_hold)
        )


        .def("clear_min_hold",&freq_sink_c::clear_min_hold,
            D(freq_sink_c,clear_min_hold)
        )


        .def("disable_legend",&freq_sink_c::disable_legend,
            D(freq_sink_c,disable_legend)
        )


        .def("reset",&freq_sink_c::reset,
            D(freq_sink_c,reset)
        )


        .def("enable_axis_labels",&freq_sink_c::enable_axis_labels,
            py::arg("en") = true,
            D(freq_sink_c,enable_axis_labels)
        )

        ;




}







