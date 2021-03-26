//
//  9-classes.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/26/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "9-classes.hpp"
#include <iostream>

class Player {
public:
    int x, y;
    int speed;
    
    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

//void Move(Player& player, int xa, int ya) {
//    player.x += xa * player.speed;
//    player.y += ya * player.speed;
//}


void Classes() {
    std::cout <<  "CLASSES" << std::endl;
    
    Player player;
    player.x = 5;
    player.y = 5;
    player.speed = 10;
    
    player.Move(2, 3);
    
    std::cout << player.x << " " << player.y;
    
    std::cout << std::endl << std::endl;
}
