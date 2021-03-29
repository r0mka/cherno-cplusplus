//
//  23-const.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "23-const.hpp"
#include <iostream>
//class EntityConst {
//private:
//    // you have to put asterics on every variable if you want both of them to be pointers, otherwise second variable will be an integer
//    const int* m_X, *m_Y;
//public:
//    // const after method name only for classes
//    // It means this method will not modify class member variables
//    const int* const GetX() const {
//        return m_X;
//    }
//
//};



class EntityConst {
private:
    int m_X, m_Y;
    mutable int var;
public:
    // const after method name only for classes
    // It means this method will not modify class member variables
    int GetX() const {
        var = 2;
        return m_X;
    }

    void SetX(int x) {
        m_X = x;
    }
};

// pass by reference because you don't want to copy the class
// Using const means you cannot change contents of  Entity
void PrintEntity(const EntityConst& e){
    std::cout << e.GetX() << std::endl;
}


void Const(){
    std::cout <<  "CONST KEY WORD" << std::endl;
    
    EntityConst e;
    
    
    
    
    const int MAX_AGE = 90;
    
    
    // Cant change the contents the pointer point to
    const int* a = new int;
    
    // opposite of the one above. Cannot reassign the pointer
    //    int* const a = new int;
    
    
    a = (int*)&MAX_AGE;
    
    
    std::cout << MAX_AGE << std::endl;
    std::cout << *a << std::endl;
    
  
    std::cout << std::endl << std::endl;
}
