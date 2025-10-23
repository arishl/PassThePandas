//
// Created by Aris Lemmenes on 10/22/25.
//

#include "../include/Game.h"
#include "../include/Dice.h"

Game::Game(std::vector<Player> players, int dice_per_player)
{
    players_ = std::move(players);
    for (auto player : players_)
    {
        player.create_hand(dice_per_player);
    }
}
