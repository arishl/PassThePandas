//
// Created by Aris Lemmenes on 10/22/25.
//

#ifndef PACMAN_ENUMS_H
#define PACMAN_ENUMS_H
#include <random>

enum class Face
{
    Panda,
    Water,
    Bamboo,
    Blank
};

class Dice
{
    Dice();
    void roll_dice(std::mt19937& gen);
    static void create_dice();
private:
    Face face_;
};


#endif //PACMAN_ENUMS_H