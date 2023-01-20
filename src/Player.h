//
// Created by dmitriykim on 1/9/23.
//

#ifndef FIRSTGAME_V2_PLAYER_H
#define FIRSTGAME_V2_PLAYER_H

#include "game_const.h"
class Map;
class Monster;

class Player {
private:
    int x_;
    int y_;
    int health_;
    int damage_;
    int armor_;

public:
    Player();
    ~Player();
    Player(int x, int y, int health, int damage, int armor);

    void move(Player& player, char keyPressed, Map map);

    void setX(int x);
    int getX()const;

    int getY() const;
    void setY(int y);

    int getHealth() const;
    void setHealth(int health);

    int getDamage() const;
    void setDamage(int damage);

    int getArmor() const;
    void setArmor(int armor);

    void printInfo();
    void isMonsterNearby(Map map, Monster monster);
};


#endif //FIRSTGAME_V2_PLAYER_H
