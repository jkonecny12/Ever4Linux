project(Ever4Linux)
cmake_minimum_required(VERSION 2.8.11)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(SOURCE_DIR src)

set(Ever4Linux_SRCS 
	${SOURCE_DIR}/main.cpp
	)
	
set(RESOURCES
	resources.qrc
	)
	
qt5_add_resources(Ever4Linux_RES ${RESOURCES})

add_executable(ever4Linux ${Ever4Linux_SRCS} ${Ever4Linux_RES})

target_link_libraries(ever4Linux Qt5::Core)
target_link_libraries(ever4Linux Qt5::Widgets)
target_link_libraries(ever4Linux Qt5::Quick)

install(TARGETS ever4Linux RUNTIME DESTINATION bin)