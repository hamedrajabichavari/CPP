//
//  Date.hpp
//  dateClass
//
//  Created by Rajabi Chavari, Hamed on 2019-08-07.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//
#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Date{
    
private:
    
    int day;
    int month;
    int year;
    std::string DOW;
    
public:
    
    int getDay();
    void setDay(int day);
    
    int getMonth();
    void setMonth(int month);
    
    int getYear();
    void setYear(int year);
    
    std::string getDOW();
    void setDOW(std::string DOW);

    
    //default constructor
    Date();
    //overloaded constructor
    Date(int day , int month , int year,std::string DOW);
   //destructor
    ~Date();
    
    void whatDateIsIt();
};
#endif /* Date_hpp */
