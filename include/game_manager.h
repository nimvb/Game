//
// Created by pc on 7/25/18.
//

#pragma once

#include "abstract_game_manager.h"
#include "abstract_input_manager.h"
#include "abstract_random_manager.h"

using namespace Game::Input;
using namespace Game::Utility;

namespace Game {

    typedef enum {
        Equal,
        Lower,
        Higher
    } CompareResult;
    class GameManager : public IGameManager {
        public:
            GameManager(IInputManager<int_t >* input_manager,IRandomGenerator* random_generator);
            auto run() -> void override ;
        private:
            auto compare(int_t user_num, int_t random_num) -> CompareResult;
            IInputManager<int_t>* input_manager_;
            IRandomGenerator* random_generator_;

    };
}