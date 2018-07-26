//
// Created by pc on 7/25/18.
//

#pragma once

#include "base.h"

namespace Game {

    class IGameManager {
        public:
            virtual auto run() -> void = 0;
        private:
    };
}
