//
// Created by dmitriykim on 1/19/23.
//

#include "Monster.h"

Monster::Monster(int x, int y, int health, int damage, int armor)
        :x_(x), y_(y), health_(health), damage_(damage), armor_(armor){
}

int Monster::getX() const {
    return this -> x_;
}
void Monster::setX(int x) {
    this -> x_ = x;
}

int Monster::getY() const {
    return y_;
}
void Monster::setY(int y) {
    this-> y_ = y;
}

int Monster::getHealth() const {
    return health_;
}
void Monster::setHealth(int health) {
    this-> health_ = health;
}

int Monster::getDamage() const {
    return damage_;
}
void Monster::setDamage(int damage) {
    this-> damage_ = damage;
}

int Monster::getArmor() const {
    return armor_;
}
void Monster::setArmor(int armor) {
    this-> armor_ = armor;
}

