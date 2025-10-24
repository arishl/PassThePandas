//
// Created by Aris Lemmenes on 10/22/25.
//
#include "../include/Dice.h"

#include <random>

Dice::Dice()
{
    roll_dice();
}

void Dice::roll_dice()
{
    std::random_device rd;
    std::mt19937 gen(rd());
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

Dice Dice::create_dice()
{
    return {};
}

std::string Dice::stringify() const
{
    switch (face_)
    {
    case Face::Bamboo:
        return "Bamboo";
        break;
    case Face::Water:
        return "Water";
        break;
    case Face::Panda:
        return "Panda";
        break;
    default:
        return "Blank";
    }

}

std::ostream& operator<<(std::ostream& os, const Dice& obj)
{
    os << obj.stringify();
    return os;
}
