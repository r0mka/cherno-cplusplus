//
//  27-create-objects.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 4/3/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "27-create-objects.hpp"
#include <iostream>

using String = std::string;


class Entity27 {
private:
    String m_Name;
public:
    Entity27(): m_Name("Unknown"){}
    Entity27(const String& name): m_Name(name) {}
    
    const String& GetName() const { return m_Name; }
};

void CreateObjects(){
    std::cout <<  "CREATE/INSTANTIATE OBJECTS" << std::endl;
    
    //Entity27 entity("Roman");
    //Entity27 entity;
    
    // allocating on the stack
//    Entity27* e;
//    {
//        Entity27 entity = Entity27("Roman");
//        e = &entity;
//        std::cout << e->GetName() << std::endl;
//    }
   
    // allocating on the heap. New keyword
    Entity27* e;
    {
        Entity27* entity = new Entity27("Roman");
        e = entity;
        std::cout << entity->GetName() << std::endl;
    
    }
  
   delete e;
    
    std::cout << std::endl;
}
