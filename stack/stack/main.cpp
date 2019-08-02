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




int main() {
    
    
    printMultiplicationTable(11,11);
    std::cout << "----------------"<< std::endl;
   
   
    forEachLoop();
    std::cout << "----------------"<< std::endl;
   
    
    //using test... to keep the main.cpp clean
    
    testModify();
    std::cout << "----------------"<< std::endl;
    
    testIsPrime();
    std::cout << "----------------"<< std::endl;
    
    addSomeStars("hello",'*');
    std::cout << "----------------"<< std::endl;
    
    reverseTheWord("hamedRajabi");
    std::cout << reverseTheWord("hamedRajabi") <<std::endl;
    std::cout << "----------------"<< std::endl;
    
    testMimosa();
    std::cout << "----------------"<< std::endl;
    
    stackMenuWithPointer();
    std::cout << "----------------"<< std::endl;
}
