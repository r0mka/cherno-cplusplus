//
//  19-interfaces.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "19-interfaces.hpp"
#include <iostream>

class Printable {
public:
    virtual std::string GetClassName() = 0;
};

class EntityV4: public Printable {
public:
    virtual std::string GetName() { return "Entity"; }
    std::string GetClassName() override { return "Entity"; }
};

class PlayerV4: public EntityV4 {
private:
    std::string m_Name;
public:
    PlayerV4(const std::string& name)
    : m_Name(name) {}
    
    
    std::string GetName() override {
        return m_Name;
    }
    
    std::string GetClassName() override { return "Player"; }
    
};

void PrintName(EntityV4* e) {
    std::cout << e->GetName() << std::endl;
}

void Print(Printable* obj) {
    std::cout << obj->GetClassName() << std::endl;
}

void Interfaces(){
    std::cout <<  "INTERFACES" << std::endl;
    
    EntityV4* e = new EntityV4();
//    PrintName(e);
    
    PlayerV4* p = new PlayerV4("Roman");
//    PrintName(p);
   
    Print(e);
    Print(p);
    
    std::cout << std::endl << std::endl;
    
}

