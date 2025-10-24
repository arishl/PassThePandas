//
// Created by Aris Lemmenes on 10/22/25.
//

#include "../include/Player.h"

#include <iostream>
#include <string>

Player::Player(const std::string& name)
    : name_(name), player_id_(0), is_turn_(false)
{

}

Player::Player(const std::string& name, const int id)
    : name_(name), player_id_(id), is_turn_(false)
{

}

bool Player::is_turn()
{
}

void Player::print_hand() const
{
    std::cout << name_ << ": ";
    for (auto dice: hand_)
    {
        std::cout << dice << " ";
    }
}

void Player::create_hand(const int count)
{
    for (int i = 0; i < count; i++)
    {
        hand_.push_back(Dice::create_dice());
    }
}

std::string Player::get_name() const
{
    return name_;
}

void Player::roll_dice()
{
    for (Dice& dice : hand_)
    {
        dice.roll_dice();
    }
}
