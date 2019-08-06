//
//  cat.cpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-08-02.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "cat.hpp"
#include <ctype.h>

//setters
void Cat::setName(std::string objName){
    name = objName;
}
void Cat::setColor(std::string objColor){
    color = objColor;
}
void Cat::setSingle(bool objSingle){
    single = objSingle;
}
void Cat::setWeight(double objWeight){
    weight = objWeight;
}
void Cat::setHealth(int objHealth){
    health = objHealth;
}

//getters
std::string Cat::getName(){
    return this->name;
}
std::string Cat::getColor(){
    return this->color;
}
bool Cat::getSingle(){
    return this->single;
}
double Cat::getWeight(){
    return this->weight;
}
int Cat::getHealth(){
    return this->health;
}

//functions
void Cat::jump(){
    std::cout << "I jump like a crazy cat" << std::endl;
}

void Cat::sleep(){
    std::cout << "zzz I like sleeping all day long" << std::endl;
}

void Cat::eat(){
    std::cout << "hmm I like tuna" << std::endl;
    }
