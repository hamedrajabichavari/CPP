//
//  Date.cpp
//  dateClass
//
//  Created by Rajabi Chavari, Hamed on 2019-08-07.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "Date.hpp"
#include <string>


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

std::string Date::getDOW(){
    return DOW;
}

void Date::setDOW(std::string DOW){
    this->DOW = DOW;
}

//default constructor
Date::Date() :
Date(0,0,0,"monday"){
    
}
//overloaded constructor
Date::Date(int day, int month, int year, std::string DOW){
    
    //check and convert the day to upper case
    std::locale loc;
    std::string temp;
    for (std::string::size_type i=0; i< DOW.length(); ++i)
        temp += std::toupper(DOW[i],loc);
    
    if(day > 0 && day <= 31){
        this->day = day;
    } else{
        this->day = 0;
    }
    
    if(month == 1 || month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 ){
          if(day > 0 && day <= 31){
              this->day = day;
          } else{
              this->day = 0;
          }
    }
    if(month == 4 || month == 6 ||month == 9 ||month == 11 ){
            if(day > 0 && day <= 30){
                this->day = day;
            } else{
                this->day = 0;
            }
    }
    if(month == 2){
            if(year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
                if(day > 0 && day <= 29){
                    this->day = day;
                } else{
                    this->day = 0;
                }
            }else{
                if(day > 0 && day <= 28){
                    this->day = day;
                } else{
                    this->day = 0;
                }
            }
        }
    if(month > 0 && month <= 12){
        this->month = month;
    } else{
        this->month = 0;
    }
    if(year >=0 && year <= 3000){
        this->year = year;
    }else {
        this->year = 0;
    }
}

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
    std::cout << formattedDay << "/" << formattedMonth << "/" << formattedYear <<  "/" << DOW << std::endl;
}
