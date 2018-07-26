//
// Created by pc on 7/25/18.
//
#include "input_manager.h"


auto Game::Input::NumericalInputManager::get_input() -> int_t {
    int_t input;
    std::cin >> input;
    return input;
}
