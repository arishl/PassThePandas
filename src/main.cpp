#include <iostream>
#include <random>
#include "../include/Player.h"
#include "../include/Game.h"
#include "../include/Dice.h"

int main(){
    using Players = std::vector<Player>;
    Players players = {Player("a")};
    Game game = Game(std::move(players), 5);
    game.print_player_hands();

    game.print_player_hands();
    return 0;
};
