//
//  morefunctions.hpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-07-31.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef morefunctions_hpp
#define morefunctions_hpp

#include <stdio.h>
#include <string>
bool isPrime(int value);
void testIsPrime();
void addSomeStars(std::string name , char ch);
std::string reverseTheWord(std::string name);
void mimosa(std::string = "orange juice", std::string = "champaign");
void testMimosa();
int modify (int a,int &b, int &c);
void testModify();
void forEachLoop();
void printMultiplicationTable(int, int);
long long int fibo(unsigned int order);
void testFibo();
long long int factorial(unsigned int number);
void testFactorial();
#endif /* morefunctions_hpp */
