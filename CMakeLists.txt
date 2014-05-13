project(Ever4Linux)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(Ever4Linux_SRCS Ever4Linux.cpp main.cpp)
qt4_automoc(${Ever4Linux_SRCS})
add_executable(Ever4Linux ${Ever4Linux_SRCS})
target_link_libraries(Ever4Linux ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
install(TARGETS Ever4Linux RUNTIME DESTINATION bin)
