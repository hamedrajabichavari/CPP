//
//  morefunctions.hpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-07-31.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef moreFunctions_hpp
#define moreFunctions_hpp

#include <stdio.h>
#include <string>

bool isPrime(int value);
void addSomeStars(std::string name, char ch);
void reverseTheWord(std::string word);
void testReverseTheWord();

//define default parameters in your prototype
void mimosa(std::string = "orange juice", std::string = "champaign");
void testMimosa();

int add(int a, int b);

//signature for modify do not forget to add & reference key
int modify( int a, int &b, int &c );

void testModifyAndAdd();

void forEachLoop();

void printMultipicationTable(int,int);

long long int fibo(unsigned int order);

long long int factorial(unsigned int number);

void vectorExample();

#endif /* moreFunctions_hpp */
