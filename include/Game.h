//
// Created by Aris Lemmenes on 10/22/25.
//

#ifndef PASSTHEPANDAS_GAME_H
#define PASSTHEPANDAS_GAME_H

#include "Player.h"
#include "Dice.h"

class Game
{
    Game(std::vector<Player> players, int dice_count_player);
private:
    std::vector<Player> players_;
    int dice_in_center = 0;
};


#endif //PASSTHEPANDAS_GAME_H