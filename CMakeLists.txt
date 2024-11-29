cmake_minimum_required(VERSION 3.10.0)

project(proj_s_gui)

set(LIB_NAME s_gui)

find_package(Qt6 COMPONENTS Core    REQUIRED)

add_library(${LIB_NAME}
	 ui/dialogs/dataTimesetting.ui
	 bug.cpp
)

set_target_properties(${LIB_NAME} PROPERTIES
    AUTOMOC ON
	AUTOUIC ON
	AUTORCC ON
)

