//
// Created by dmitriykim on 1/10/23.
//

#include <iostream>
#include "Map.h"
#include "Player.h"
#include "game_const.h"
#include "Monster.h"

Map::Map() {
    for (int i = 0; i < game_const::HEIGHT; i++){
        for (int j = 0; j < game_const::WIDTH; j++){
            if (i == 0 || i == game_const::HEIGHT-1 || j == 0 || j == game_const::WIDTH-1){
                map_[i][j] = '#';
            }else{
                map_[i][j] = ' ';
            }
        }
    }
}

Map::~Map() {

}

char Map::findCharacter(int height, int width) {
    return map_[height][width];
}

void Map::draw(Player player, Monster monster) {
    for (int i = 0; i < game_const::HEIGHT; i++){
        for (int j = 0; j < game_const::WIDTH; j++){
            if(player.getX() == j && player.getY() == i){
                std::cout << "P";
            }else if(monster.getX() == j && monster.getY() == i){
                std::cout << "M";
            }
            else{
                std::cout << map_[i][j];
            }
        }
        std::cout << std::endl;
    }
}
