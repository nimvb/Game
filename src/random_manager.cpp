//
// Created by pc on 7/25/18.
//

#include "random_manager.h"


Game::Utility::RandomGenerator Game::Utility::RandomGenerator::instance_;

auto Game::Utility::RandomGenerator::generate(int_t low, int_t high) -> int_t {
    return (std::rand() % (high - low)) + low;
}

auto Game::Utility::RandomGenerator::get_instance() -> Game::Utility::IRandomGenerator & {
    return instance_;
}

Game::Utility::RandomGenerator::RandomGenerator() {
    srand(time(0));

}
