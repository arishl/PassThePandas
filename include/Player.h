//
// Created by Aris Lemmenes on 10/22/25.
//

#ifndef PASSTHEPANDAS_PLAYER_H
#define PASSTHEPANDAS_PLAYER_H

#include <string>
#include "Dice.h"

class Player
{
public:
    explicit Player(const std::string& name);
    explicit Player(const std::string& name, const int id);
    bool is_turn();
    void print_hand() const;
    void create_hand(int count);
    [[nodiscard]] std::string get_name() const;
    void roll_dice();


private:
    std::string name_;
    int player_id_;
    bool is_turn_ = false;
    std::vector<Dice> hand_;
};

#endif //PASSTHEPANDAS_PLAYER_H