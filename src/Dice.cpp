//
// Created by Aris Lemmenes on 10/22/25.
//
#include "../include/Dice.h"

#include <random>

Dice::Dice()
{
    roll_dice()
}

static Dice create_dice()
{
    Dice d {};
    return d;
}

void Dice::roll_dice(std::mt19937& gen)
{
    std::uniform_int_distribution<> dice(1, 6);
    int roll = dice(gen);
    switch (roll)
    {
        case 1:
            face_ = Face::Bamboo;
            break;
        case 2:
            face_ = Face::Water;
            break;
        case 3:
            face_ = Face::Panda;
            break;
        default:
            face_ = Face::Blank;
    }
}

