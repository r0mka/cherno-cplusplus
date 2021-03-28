//
//  16-constructors.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "16-constructors.hpp"
#include <iostream>


class Entity {
public:
    float X, Y;
    
    Entity(float x , float y){
        X = x;
        Y = y;
    }
    void Print() {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Constructors(){
    std::cout <<  "CONSTRUCTORS" << std::endl;
    
    Entity e(10.0f, 5.0f);
    e.Print();
    
    std::cout << std::endl << std::endl;
}
