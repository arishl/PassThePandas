//
// Created by Aris Lemmenes on 10/22/25.
//

#include "../include/Player.h"
#include <string>

Player::Player(std::string name)
{
    name_ = name;
}

void Player::create_hand(int count)
{
    hand_.push_back(create_dice());
}