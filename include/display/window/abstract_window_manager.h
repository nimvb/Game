//
// Created by pc on 7/25/18.
//

#pragma once

#include <string>
#include "window_info.h"

namespace Game {
    namespace Display {
        namespace Window {
            template <class T>
            class IWindowManager {
                public:
                    virtual auto get_window(std::string name) -> T = 0;
                    virtual auto create_window(std::string name,int width,int height,int x,int y) -> T = 0;
                    virtual auto get_window_info(std::string name) -> WindowInfo = 0 ;

                private:
            };


        }
    }
}