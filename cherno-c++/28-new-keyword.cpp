//
//  28-new-keyword.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 4/3/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "28-new-keyword.hpp"
#include <iostream>

class Entity28 {
private:
    std::string m_Name;
public:
    Entity28(): m_Name("Unknown"){}
    Entity28(const std::string& name): m_Name(name){}
    const std::string& GetName(){
        return m_Name;
    }
};

void NewKeyword(){
    std::cout <<  "NEW KEYWORD" << std::endl;
    int a = 2;
    int* b = new int[50]; // 200 bytes
    b[0] = 11;
    // this allocates memory and calls a constructor
    Entity28* e = new Entity28();
    
    // delete frees memory and also calls the destructor
    delete e;
    delete[] b;
    
    
    // this allocates memory but doesn't call the constructor
//    Entity28* e = (Entity28*)malloc(sizeof(Entity28));
    
    std::cout << e->GetName() << std::endl;
    
    std::cout << std::endl << std::endl;
}
