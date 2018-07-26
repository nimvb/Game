//
// Created by pc on 7/25/18.
//

#pragma once

#include "abstract_input_manager.h"
#include <iostream>
#include <ncurses.h>

namespace Game {
    namespace Input {

        class NumericalInputManager : public IInputManager<int_t> {
            public:
                auto get_input() -> int_t override ;
        };
    }
}
