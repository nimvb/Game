//
// Created by pc on 8/1/18.
//

#pragma once

#include "display/window/abstract_window_manager.h"
#include <ncurses.h>
#include <map>

namespace Game {
    namespace Display {
        namespace Window {
            class NcursesWindowManager : public IWindowManager<WINDOW*> {
                public:
                    auto get_window(std::string name) -> WINDOW* override;
                    auto create_window(std::string name,int width,int height,int x,int y) -> WINDOW* override;
                    auto get_window_info(std::string name) -> WindowInfo override ;
            private:
                    std::map<std::string,WINDOW*> windows_;
                    auto window_exists(std::string name) -> bool;

            };

        }
    }

}
