//
// Created by pc on 7/25/18.
//

#pragma once

#include "base.h"

namespace Game {
    namespace Utility {
        class IRandomGenerator {
            public:
                virtual auto generate(int_t low,int_t high) -> int_t = 0;
            private:
        };
    }
}
