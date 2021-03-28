//
//  18-virtual-functions.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "18-virtual-functions.hpp"
#include <iostream>
//#include <string>

class EntityV3 {
public:
    virtual std::string GetName() {return "Entity";}
};

class PlayerV3: public EntityV3 {
private:
    std::string m_Name;
public:
    PlayerV3(const std::string& name)
    : m_Name(name) {}
    
    // override isn't required but reccomended for readability
    std::string GetName() override {
        return m_Name;
    }
//    std::string GetName() {
//        return m_Name;
//    }
};

void PrintName(EntityV3* entity) {
    std::cout << entity->GetName() << std::endl;
}

void VirtualFunctions(){
    std::cout <<  "VIRTUAL FUNCTIONS" << std::endl;
    
    EntityV3* e = new EntityV3();
    std::cout << e->GetName() << std::endl;
    
    PlayerV3* p = new PlayerV3("Cherno");
    std::cout << p->GetName() << std::endl;
    
    
    EntityV3* entity = p;
    std::cout << entity->GetName() << std::endl;
    PrintName(entity);
    PrintName(p);
    
    std::cout << std::endl << std::endl;
}
