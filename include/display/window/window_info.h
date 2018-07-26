//
// Created by pc on 7/25/18.
//

#pragma once

#include "base.h"

namespace Game {
    namespace Display {
        namespace Window {

            class Point {
                public:
                    // getter
                    auto get_x() -> int_t {
                        return x_;
                    }

                    auto get_y() -> int_t {
                        return y_;
                    }

                    // setter
                    auto set_x(int_t x) -> void {
                        x_ = x;
                    }

                    auto set_y(int_t y) -> void {
                        y_ = y;
                    }
                private:
                    int_t x_;
                    int_t y_;
            };
            class WindowInfo {
                public:
                    WindowInfo(int_t width,int_t height,Point pos){
                        width_ = width;
                        height_ = height;
                        position_ = pos;
                    }
                    // getter
                    auto get_width() -> int_t {
                        return width_;
                    }

                    auto get_height() -> int_t {
                        return height_;
                    }

                    auto get_position() -> Point {
                        return position_;
                    }

                private:
                    int_t width_;
                    int_t height_;
                    Point position_{};
            };
        }
    }
}
