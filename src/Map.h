//
// Created by dmitriykim on 1/10/23.
//

#ifndef FIRSTGAME_V2_MAP_H
#define FIRSTGAME_V2_MAP_H

#include "game_const.h"
class Player;
class Monster;

class Map {
private:
    char map_[game_const::HEIGHT][game_const::WIDTH];
public:
    Map();
    ~Map();
    void draw(Player player, Monster monster);
    char findCharacter(int height, int width);
};


#endif //FIRSTGAME_V2_MAP_H
