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
    
    
    
    std::cout << std::endl;
}
