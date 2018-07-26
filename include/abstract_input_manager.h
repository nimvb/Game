//
// Created by pc on 7/25/18.
//

#pragma once
#include "base.h"

namespace Game {
    namespace Input {
        template <class T>
        class IInputManager {
            public:
                virtual auto get_input() -> T = 0;
            private:
        };
    }
}
