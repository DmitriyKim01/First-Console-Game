//
// Created by dmitriykim on 1/19/23.
//

#ifndef FIRSTGAME_V2_MONSTER_H
#define FIRSTGAME_V2_MONSTER_H


class Monster {
private:
    int x_;
    int y_;
    int health_;
    int damage_;
    int armor_;
public:
    Monster(int x, int y, int health, int damage, int armor);
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
};


#endif //FIRSTGAME_V2_MONSTER_H
