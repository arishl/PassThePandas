//
// Created by Aris Lemmenes on 10/22/25.
//

#include "../include/Game.h"

#include <iostream>

#include "../include/Dice.h"
#include "../include/Player.h"

Game::Game(std::vector<Player>&& players, int dice_per_player)
    : players_(std::move(players))   // moves directly from caller
{
    for (auto& player : players_) {
        player.create_hand(dice_per_player);
    }
}

void Game::print_players() const
{
    for (auto& player : players_)
    {
        std::cout << player.get_name() << std::endl;
    }
}

void Game::print_player_hands() const
{
    for (auto& player : players_)
    {
        player.print_hand();
        std::cout << std::endl;
    }
}

Player& get_player(std::string name)
{

}


