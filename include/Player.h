//
// Created by Aris Lemmenes on 10/22/25.
//

#ifndef PASSTHEPANDAS_PLAYER_H
#define PASSTHEPANDAS_PLAYER_H

#include <string>
#include "Dice.h"

class Player
{
    explicit Player(std::string name);
    bool is_turn();
    void print_hand();
    void create_hand(int count);

private:
    std::string name_;
    bool turn_ = false;
    std::vector<Dice> hand_;
};

#endif //PASSTHEPANDAS_PLAYER_H