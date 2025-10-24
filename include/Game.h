//
// Created by Aris Lemmenes on 10/22/25.
//

#ifndef PASSTHEPANDAS_GAME_H
#define PASSTHEPANDAS_GAME_H

#include "Player.h"
#include "Dice.h"
#include <map>

class Game
{
public:
    Game(std::map<int, Player>&& players, int dice_per_player);
    void print_players() const;
    void print_player_hands() const;
private:
    std::map<int, Player> players_;
    std::vector<Dice> dice_in_center = {};
};


#endif //PASSTHEPANDAS_GAME_H