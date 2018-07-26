//
// Created by pc on 7/25/18.
//

#include <iostream>
#include "game_manager.h"



auto Game::GameManager::compare(int_t user_num, int_t random_num) -> Game::CompareResult {

    if(user_num == random_num){
        return Equal;
    }
    if(user_num > random_num){
        return Higher;
    }
    if(user_num < random_num){
        return Lower;
    }
    return Equal;
}

Game::GameManager::GameManager(IInputManager<int_t>* input_manager, IRandomGenerator *random_generator) {
    input_manager_ = input_manager;
    random_generator_ = random_generator;
}

auto Game::GameManager::run() -> void {

    auto random_number = random_generator_->generate(10,200);
    do {
        auto user_input = input_manager_->get_input();
        auto result = compare(user_input,random_number);
        if(result == Equal){
            std::cout <<"[*] You win!"<<std::endl;
            break;
        }
        if(result == Higher){
            std::cout <<"[*] Enter lower number!"<<std::endl;
        }
        if(result == Lower){
            std::cout <<"[*] Enter higher number!"<<std::endl;
        }

    }while (true);

}
