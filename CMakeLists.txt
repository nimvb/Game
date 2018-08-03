cmake_minimum_required(VERSION 3.10)
project(SimpleGame)

set(CMAKE_CXX_STANDARD 14)

include_directories("include/")

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(SimpleGame main.cpp include/base.h include/abstract_input_manager.h include/input_manager.h src/input_manager.cpp include/abstract_random_manager.h include/random_manager.h src/random_manager.cpp include/abstract_game_manager.h include/game_manager.h src/game_manager.cpp include/display/window/abstract_window_manager.h include/display/window/window_info.h include/display/window/ncurses/ncurses_window_manager.h src/display/window/ncurses/ncurses_window_manager.cpp)

target_link_libraries(SimpleGame ${CURSES_LIBRARIES})