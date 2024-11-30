cmake_minimum_required(VERSION 3.10.0)

project(proj_s_gui)

set(LIB_NAME s_gui)

find_package(Qt6 COMPONENTS Core Widgets   REQUIRED)

add_library(${LIB_NAME}
	 ui/dialogs/widgetcmakeexample.ui
	 ui/dialogs/widgetcmakeexample.cpp
	 ui/dialogs/widgetcmakeexample.h
)

target_link_libraries(${LIB_NAME} PRIVATE Qt6::Widgets)

target_include_directories(${LIB_NAME}  PUBLIC  ${CMAKE_CURRENT_SOURCE_DIR}/ui/dialogs)

set_target_properties(${LIB_NAME} PROPERTIES
    AUTOMOC ON
	AUTOUIC ON
	AUTORCC ON
)

add_executable(cmakeBug main.cpp)
target_link_libraries(cmakeBug PRIVATE s_gui  Qt6::Widgets)
