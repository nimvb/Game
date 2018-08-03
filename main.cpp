#include <iostream>
#include "input_manager.h"
#include "game_manager.h"
#include "random_manager.h"
#include <ncurses.h>
#include "display/window/ncurses/ncurses_window_manager.h"
using namespace Game;
using namespace Game::Display::Window;

auto main() -> int {
    initscr();
    IWindowManager<WINDOW*>* win_manager = new NcursesWindowManager();
    IRandomGenerator& random_generator = RandomGenerator::get_instance();
    WINDOW* win = win_manager->create_window("MAIN",30,30,1,1);
    WINDOW* win2 = win_manager->create_window("MAIN!",40,40,1,2);
    std::cout << random_generator.generate(1,10);
    endwin();
    return 0;
}