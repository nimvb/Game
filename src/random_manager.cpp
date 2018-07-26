//
// Created by pc on 7/25/18.
//

#include "random_manager.h"

auto Game::Utility::RandomGenerator::generate(int_t low, int_t high) -> int_t {
    return (std::rand() % (high - low)) + low;
}
