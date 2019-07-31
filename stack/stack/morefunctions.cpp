//
//  morefunctions.cpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-07-31.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//
#include <iostream>
#include "morefunctions.hpp"
#include <string>

bool isPrime(int value){
  
    if(value <=1 ){
        return false;
    }
    if (value == 2) {
        return true;
    }
    for (int i=2; i*i <=  value ; i += 1) {
        if(value % i == 0){
            return false;
        }
    }
   return true;
    
    
}


void addSomeStars(std::string name , char ch){
    
    //get the length of string with name.length()
    //Loop through the string
    //as string is an array use[] notation
    
    for (int i=0 ; i < name.length() ; i+=1){
        if(i < name.length()-1){
            std::cout << name[i]<< ch;
        }else{
            std::cout << name[i];
        }
        
    }
    std::cout << std::endl;
}

std::string reverseTheWord(std::string name){
    
    //creat a new string variable
    std::string tempString{""};
    //store the word letters and concatenate to the new variable from reverse order
    for (int i=(int) name.length()-1; i >= 0 ; i-=1){
        tempString += name[i];
//            std::cout << name[i];
   
        
    }
    //std::cout << std::endl;
    return tempString;

}

