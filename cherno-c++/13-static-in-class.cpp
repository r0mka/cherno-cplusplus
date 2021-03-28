//
//  13-static-in-class.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/27/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "13-static-in-class.hpp"
#include <iostream>
// Static inside a class. If you use it with a variable that means
// there is going to be one instance of that variable across all
// instances of the class.

// if you use it with a method. You don't have access to the class instance.
// Inside a static method you cannot refer to a class instance since you don't have that class
// instance to refer to.


struct Entity {
    int x, y;
    static void Print(Entity e){
        std::cout << e.x << ", " << e.y << std::endl;
    }
};

//int Entity::x;
//int Entity::y;
//static void Print(Entity e){
//    std::cout << e.x << ", " << e.y << std::endl;
//}


void StaticInClassAndStruct(){
    std::cout <<  "STATIC FOR CLASSES AND STRUCTS" << std::endl;
   
    Entity e;
    e.x = 2;
    e.y = 3;
    
//    Entity e1 = {5, 8};
    Entity e1;
    e1.x = 5;
    e1.y = 8;
    
    
    Entity::Print(e);
    Entity::Print(e1);
    
    std::cout << std::endl << std::endl;
}
