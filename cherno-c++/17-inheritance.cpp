//
//  17-inheritance.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "17-inheritance.hpp"
#include <iostream>

class EntityV2 {
public:
    float X, Y;
    
    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
  
};

class Player: public EntityV2 {
public:
    const char* Name;
    Player(const char* name){
        Name = name;
        X = 2;
        Y = 2;
    }
    void PrintName(){
        std::cout << Name << std::endl;
    }
};

void Inheritance(){
    std::cout <<  "INHERITANCE" << std::endl;
    
    Player player("Roman");
    player.Move(5,5);
    std::cout << player.X << std::endl;
    player.PrintName();
    
    std::cout << sizeof(EntityV2) << std::endl;
    std::cout << sizeof(player) << std::endl;
    std::cout << std::endl << std::endl;
}
