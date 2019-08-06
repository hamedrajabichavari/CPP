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
#include <vector>
#include <ctype.h>

#include "../OOP/cat.hpp"


int main() {
    
    Cat fluffy;
    fluffy.setName ("fluffy");
    fluffy.setColor ("Black and White");
    fluffy.setWeight (10.4);
    fluffy.setHealth (100);
    fluffy.setSingle (false);
    
    
    std::cout << "the name of cat is " << fluffy.getName() << std::endl;
    std::cout << "the color of cat is " << fluffy.getColor() << std::endl;
    std::cout << "the weight of cat is " << fluffy.getWeight()<< "lb" << std::endl;
    std::cout << "the health of cat is " << fluffy.getHealth() << std::endl;
    std::cout << "is this a single cat? " << fluffy.getSingle() << std::endl;
    
    //ternary operator
    // ( condition ) ? true : false
    (fluffy.getSingle()) ? std::cout << "this cat is single" << std::endl : std::cout << "this cat is not single" << std::endl;
    
    
    return 0;
}
    
//    //Array size and type!!!
//    //flexible array---vector
//    std::vector<std::string> students {"sina","siamak","hamed","mariana","jose","daniel"};
//    
//    std::cout << "---there are "<< students.size() << " students---" << std::endl;
//    std::cout << "---these are the students---" << std::endl;
//        for (auto student : students){
//            
//            std::cout << student << " ";
//        }
//     std::cout << std::endl;
//    
//    std::cout<< "who is the new student?";
//    std::string newStudent;
//    std::cin >> newStudent;
//    students.push_back(newStudent);
//    
//    std::cout << "--------new list--------"<<std::endl;
//    std::cout << "---there are "<< students.size() << " students---" << std::endl;
//        for (auto student : students){
//            std::cout << student << " ";
//    }
//    std::cout << std::endl;
//    std::cout << "----------------"<< std::endl;
//    
// 
//    
//    testFactorial();
//    std::cout << "----------------"<< std::endl;
//
//    
//    
//    testFibo();
//    std::cout << "----------------"<< std::endl;
//
//    
//    printMultiplicationTable(11,11);
//    std::cout << "----------------"<< std::endl;
//    
//   
//    forEachLoop();
//    std::cout << "----------------"<< std::endl;
//   
//    
//    //using test... to keep the main.cpp clean
//    
//    testModify();
//    std::cout << "----------------"<< std::endl;
//    
//    testIsPrime();
//    std::cout << "----------------"<< std::endl;
//    
//    addSomeStars("hello",'*');
//    std::cout << "----------------"<< std::endl;
//    
//    reverseTheWord("hamedRajabi");
//    std::cout << reverseTheWord("hamedRajabi") <<std::endl;
//    std::cout << "----------------"<< std::endl;
//    
//    testMimosa();
//    std::cout << "----------------"<< std::endl;
//    
//    stackMenuWithPointer();
//    std::cout << "----------------"<< std::endl;
//}
