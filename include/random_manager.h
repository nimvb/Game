//
// Created by pc on 7/25/18.
//

#pragma once

#include "abstract_random_manager.h"
#include <random>

namespace Game {
    namespace Utility {
        class RandomGenerator : public IRandomGenerator {
            public:
                auto generate(int_t low,int_t high) -> int_t  override ;
                static auto get_instance() -> IRandomGenerator&;

            private:

                RandomGenerator();
                RandomGenerator(const RandomGenerator&) = default;
                RandomGenerator& operator=(const RandomGenerator&) = default;
                static RandomGenerator instance_;
        };
    }
}
