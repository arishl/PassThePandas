//
// Created by Aris Lemmenes on 10/22/25.
//

#ifndef PASSTHEPANDAS_GAME_H
#define PASSTHEPANDAS_GAME_H

#include "Player.h"
#include "Dice.h"

class Game
{
public:
    Game(std::vector<Player>&& players, int dice_per_player);
    void print_players() const;
    void print_player_hands() const;
private:
    std::vector<Player> players_;
    std::vector<Dice> dice_in_center = {};
};


#endif //PASSTHEPANDAS_GAME_H