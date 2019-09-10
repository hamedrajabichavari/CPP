//
//  Date.hpp
//  Assignment9
//
//  Created by Rajabi Chavari, Hamed on 2019-09-10.
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
    
public:
    
    int getDay();
    void setDay(int day);
    
    int getMonth();
    void setMonth(int month);
    
    int getYear();
    void setYear(int year);
    
    //default constructor
    Date();
    //overloaded constructor
    Date(int day , int month , int year);
    //copy constructor
    Date(Date const &obj);
    //destructor
    ~Date();
    
    void whatDateIsIt();
};
#endif /* Date_hpp */
