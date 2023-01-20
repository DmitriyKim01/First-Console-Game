#include <iostream>
#include "src/Player.h"
#include "src/Map.h"
#include "src/Monster.h"

int main() {
    Player player1 = Player(5, 5, 100, 15, 25);
    Monster monster1 = Monster(15, 10, 20, 15, 0);
    char direction;
    do{
        system("clear");
        player1.printInfo();
        Map map = Map();
        map.draw(player1, monster1);
        std::cout << "Please enter your direction: ";
        std::cin >> direction;
        player1.move(player1, direction, map);
    }while(direction != 'q');
    return 0;
}
