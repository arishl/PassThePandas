//
// Created by Aris Lemmenes on 10/22/25.
//

#ifndef PACMAN_ENUMS_H
#define PACMAN_ENUMS_H
#include <random>
#include <ostream>

enum class Face
{
    Panda,
    Water,
    Bamboo,
    Blank
};

class Dice
{
public:
    Dice();
    void roll_dice();
    static Dice create_dice();
    [[nodiscard]] std::string stringify() const;
    friend std::ostream& operator<<(std::ostream& os, const Dice& obj);
private:
    Face face_;
};


#endif //PACMAN_ENUMS_H