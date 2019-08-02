//
//  cat.hpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-08-02.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef cat_hpp
#define cat_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Cat{
    //if we want access to the properties and functions outside of class we have to use public:
public:
    //properties
    std::string name;
    std::string color;
    bool single;
    double weight;
    int health;
    
    //functions
    void jump();
    void sleep();
    void eat();
};


#endif /* cat_hpp */
