#include <iostream>
#include "input_manager.h"
#include "game_manager.h"
#include "random_manager.h"
#include <ncurses.h>
using namespace Game;
auto main() -> int {
    IInputManager<int_t >* input_manager = new NumericalInputManager();
    IRandomGenerator* random_generator = new RandomGenerator();
    IGameManager* game_manager = new GameManager(input_manager,random_generator);
    game_manager->run();

    return 0;

}