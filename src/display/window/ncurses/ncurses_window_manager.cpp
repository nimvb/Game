//
// Created by pc on 8/1/18.
//

#include "display/window/ncurses/ncurses_window_manager.h"

auto Game::Display::Window::NcursesWindowManager::get_window(std::string name) -> WINDOW * {
    if(window_exists(name)){
        return windows_[name];
    }
    return nullptr;
}

auto Game::Display::Window::NcursesWindowManager::window_exists(std::string name) -> bool {
    if(windows_.find(name) == windows_.end()){
        return false;
    }
    return true;
}

auto Game::Display::Window::NcursesWindowManager::create_window(std::string name, int width, int height, int x,
                                                                int y) -> WINDOW * {
    if(window_exists(name)){
        return windows_[name];
    }
    WINDOW* win = newwin(width,height,x,y);
    windows_[name] = win;
    return win;
}

auto
Game::Display::Window::NcursesWindowManager::get_window_info(std::string name) -> Game::Display::Window::WindowInfo {
    return Game::Display::Window::WindowInfo(0, 0, Window::Point());
}
