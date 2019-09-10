//
//  Date.cpp
//  Assignment9
//
//  Created by Rajabi Chavari, Hamed on 2019-09-10.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "Date.hpp"
#include <string>
#include <time.h>
#include <stdexcept>


int Date::getDay(){
    return day;
}

void Date::setDay(int day){
    this->day = day;
}

int Date::getMonth(){
    return month;
}

void Date::setMonth(int month){
    this->month = month;
}

int Date::getYear(){
    return year;
}

void Date::setYear(int year){
    this->year = year;
}

//default constructor
Date::Date():
Date(0,0,0){
    
}
//overloaded constructor
Date::Date(int day, int month, int year){
    
    if(day > 0 && day <= 31){
        this->day = day;
    } else{
        throw std::invalid_argument("day must be between 1 and 31");
                                    
    }
    
    if(month == 1 || month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 ){
        if(day > 0 && day <= 31){
            this->day = day;
        } else{
            throw std::invalid_argument("this month has 31days,so day must be between 1 and 31");
        }
    }
    if(month == 4 || month == 6 ||month == 9 ||month == 11 ){
        if(day > 0 && day <= 30){
            this->day = day;
        } else{
            throw std::invalid_argument("this month has 30days,so day must be between 1 and 30");
        }
    }
    if(month == 2){
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0){
                    
                    if(day > 0 && day <= 29){
                        this->day = day;
                    }else{
                        throw std::invalid_argument("leap years have 29days in february,so day must be between 1 and 29");
                    }
                }else{
                        if(day > 0 && day <= 28){
                            this->day = day;
                        } else{
                            throw std::invalid_argument("regular years have 29days in february,so day must be between 1 and 28");
                        }
            }
            }else{
                if(day > 0 && day <= 29){
                    this->day = day;
                }else{
                    throw std::invalid_argument("leap years have 29days in february,so day must be between 1 and 29");
                }
            }
        }else{
            if(day > 0 && day <= 28){
                this->day = day;
            } else{
                throw std::invalid_argument("regular years have 29days in february,so day must be between 1 and 28");
            }
                }
        
        
        
        
//        if(year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
//            if(day > 0 && day <= 29){
//                this->day = day;
//            } else{
//                throw std::invalid_argument("leap year has 29days in february,so day must be between 1 and 29");
//            }
//        }else{
//            if(day > 0 && day <= 28){
//                this->day = day;
//            } else{
//                throw std::invalid_argument("february has maximum 28days,so day must be between 1 and 28");
//            }
//        }
    }
    if(month > 0 && month <= 12){
        this->month = month;
    } else{
        throw std::invalid_argument("month must be between 1 and 12");
    }
    if(year >=0 && year <= 2019){
        this->year = year;
    }else {
        throw std::invalid_argument("year must be between 1 and 2019");
    }
    
}

//copy constructor
Date::Date(Date const &obj){
    this->day = obj.day;
    this->month = obj.month;
    this->year = obj.year;
}

//destructor
Date::~Date(){
    
}
void Date::whatDateIsIt(){
    //18            07               1982
    std::string formattedDay;
    std::string formattedMonth;
    std::string formattedYear;


    formattedDay = std::to_string(day);
    formattedMonth = std::to_string(month);
    formattedYear = std::to_string(year);


    // if the day is 9 formattedDay will be 09
    if(day < 10){
        formattedDay = "0" + std::to_string(day);
    }
    if(month == 0){
        formattedMonth = "0" + std::to_string(month);
    }
    //Jan,Feb,Mar,Apr,May...
    if(month == 1){
        formattedMonth = "Jan";
    }
    if(month == 2){
        formattedMonth = "Feb";
    }
    if(month == 3){
        formattedMonth = "Mar";
    }
    if(month == 4){
        formattedMonth = "Apr";
    }
    if(month == 5){
        formattedMonth = "May";
    }
    if(month == 6){
        formattedMonth = "Jun";
    }
    if(month == 7){
        formattedMonth = "Jul";
    }
    if(month == 8){
        formattedMonth = "Aug";
    }
    if(month == 9){
        formattedMonth = "Sep";
    }
    if(month == 10){
        formattedMonth = "Oct";
    }
    if(month == 11){
        formattedMonth = "Nov";
    }
    if(month == 12){
        formattedMonth = "Dec";
    }
    if(year < 10){
        formattedYear = "0" + std::to_string(year);
    }
    std::cout << formattedDay << "/" << formattedMonth << "/" << formattedYear << std::endl;
}

