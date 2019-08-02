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
void testIsPrime(){

std::cout << std::boolalpha;

for(int i =0 ; i<20 ; i+= 1)
//isPrime(i) means isPrime(i) is true (in morefunctions.cpp function definition)
if( isPrime(i)){
    std::cout << i << std::endl;
}
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

void mimosa(std::string oj , std::string ch){
    
    std::cout << oj << " + " << ch << " is mixing "<<std::endl;
}

void testMimosa(){
mimosa();
mimosa("apple juice" , "vodka");
mimosa("mango");
}

int modify (int a,int &b, int &c){
    a+=1;
    b+=2;
    c+=3;
    return a+b+c;
}

void testModify(){
int i,j,k;
i=5;//this will be pass by value
j=4;//this will be pass by reference (address)
k=2;
//pass be reference will check the address in the RAM
std::cout << modify(i,j,k) << std::endl;

//the value of i is not modified with the pass by value function
std::cout << "value of i is " << i << std::endl;

//the value of j is modified with the pass by reference function
std::cout << "value of j is " << j << std::endl;

}

void forEachLoop(){
//Array definition
double numbers[10] {1.1 , 2.2 , 3.3 , 4.4 , 5.5 , 6.6 , 7.7 , 8.8 , 9.9 , 10.1 };
for(double number : numbers){
    std::cout << number << std::endl;
    }
}



void printMultiplicationTable(int rowVal , int columnVal){
    
int multNumbers[rowVal][columnVal];
    rowVal = (int) sizeof(multNumbers)/sizeof(multNumbers[0]);
    columnVal = (int) sizeof(multNumbers[0])/sizeof(int);
                                            
for (int i=0 ; i< rowVal ; i+=1) {
    for (int j=0; j< columnVal; j+=1) {
        if(i==0){
            multNumbers[i][j] = j;
        }else if(j==0){
            multNumbers[i][j] = i;
        }else{
            multNumbers[i][j]=i*j;
        }
        //there are two way to print a table        
//        printf("%5d" , multNumbers[i][j]);
        std::cout<< "\t" << multNumbers[i][j];
        
    }
    std::cout<<std::endl;
    }
    
}


