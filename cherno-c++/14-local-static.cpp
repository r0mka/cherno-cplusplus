//
//  14-local-static.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/27/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "14-local-static.hpp"
#include <iostream>


//class Singleton {
//private:
//    static Singleton* s_Instance;
//public:
//    static Singleton& Get(){ return *s_Instance; }
//
//    void Hello() {
//        std::cout << "Hello\n";
//    }
//};
//Singleton* Singleton::s_Instance = nullptr;



class Singleton {
public:
    static Singleton& Get(){
        static Singleton instance;
        return instance;
    }
    
    void Hello() {
        std::cout << "Hello\n";
    }
};



void Function(){
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

void LocalStatic(){
    std::cout <<  " LOCAL STATIC" << std::endl;
    Singleton::Get().Hello();
    
    
    Function();
    Function();
    Function();
    Function();
   
    
    std::cout << std::endl << std::endl;
}
