//
//  main.cpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-07-29.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include <iostream>
#include <string>
#include "functions.hpp"
#include <stack>
#include "morefunctions.hpp"


void mimosa(std::string oj = "orange juice", std::string ch = "champaine"){
    
    std::cout << oj << " + " << ch << " is mixing "<<std::endl;
}


int main() {
    
    std::cout << std::boolalpha;

    for(int i =0 ; i<20 ; i+= 1)
        //isPrime(i) means isPrime(i) is true (in morefunctions.cpp function definition)
        if( isPrime(i)){
            std::cout << i << std::endl;
        }
    
        
        addSomeStars("hello",'*');
    
    
    reverseTheWord("hamedRajabi");
    std::cout << reverseTheWord("hamedRajabi") <<std::endl;
    
    
    mimosa();
    mimosa("apple juice" , "vodka");
        
    stackMenuWithPointer();
    
   
}
