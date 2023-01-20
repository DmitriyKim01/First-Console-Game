#include "iostream"
#include "Player.h"
#include "Monster.h"
#include "Map.h"

Player::Player()
        : x_(0), y_(0), health_(0), damage_(0), armor_(0) {
}

Player::Player(int x, int y, int health, int damage, int armor)
        :x_(x), y_(y), health_(health), damage_(damage), armor_(armor){
}

Player::~Player() {

}

int Player::getX() const {
    return this -> x_;
}
void Player::setX(int x) {
    this -> x_ = x;
}

int Player::getY() const {
    return y_;
}
void Player::setY(int y) {
    this-> y_ = y;
}

int Player::getHealth() const {
    return health_;
}
void Player::setHealth(int health) {
    this-> health_ = health;
}

int Player::getDamage() const {
    return damage_;
}
void Player::setDamage(int damage) {
    this-> damage_ = damage;
}

int Player::getArmor() const {
    return armor_;
}
void Player::setArmor(int armor) {
    this-> armor_ = armor;
}

void Player::printInfo() {
    std::cout << "Position x: " << this-> x_ << std::endl;
    std::cout << "Position y: " << this -> y_ << std::endl;
    std::cout << "Health: " << this -> health_ << std::endl;
    std::cout << "Damage: " << this-> damage_ << std::endl;
    std::cout << "Armor: " << this-> armor_ << std::endl;
}

void Player::move(Player &player, char keyPressed, Map map) {
    switch(keyPressed){
        case 'a': map.findCharacter(player.getY(), player.getX()-1) == '#' ? player.setX(player.getX()): player.setX(player.getX()-1);
            break;
        case 's': map.findCharacter(player.getY()+1, player.getX()) == '#' ? player.setY(player.getY()): player.setY(player.getY()+1);
            break;
        case 'w': map.findCharacter(player.getY()-1, player.getX()) == '#' ? player.setY(player.getY()): player.setY(player.getY()-1);
            break;
        case 'd': map.findCharacter(player.getY(), player.getX()+1) == '#' ? player.setX(player.getX()) : player.setX(player.getX()+1);
            break;
    }
}

void Player::isMonsterNearby(Map map, Monster monster) {

}

