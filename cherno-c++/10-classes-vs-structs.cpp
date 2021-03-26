//
//  10-classes-vs-structs.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/26/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "10-classes-vs-structs.hpp"
#include <iostream>

struct Player {
    // public by default unlike in a class
    int x, y;
    int speed;
    
    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

struct Vec2 {
    float x, y;
    
    void Add(const Vec2& other) {
        x += other.x;
        y += other.y;
    }
};

void Structs() {
    std::cout <<  "CLASSES VS STRUCTS" << std::endl;
    
    Player player;
    player.x = 5;
    player.y = 5;
    player.speed = 10;
    
    player.Move(2, 3);
    
    std::cout << player.x << " " << player.y;
    
    std::cout << std::endl << std::endl;
}
