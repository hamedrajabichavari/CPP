//
//  main.cpp
//  Assignment9
//
//  Created by Rajabi Chavari, Hamed on 2019-09-10.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <stdio.h>
#include <time.h>
#include "Date.hpp"


std::string printMonth(int month){
    
    std::string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    return months[month];
}


std::string printWeekDay(int weekDay){
    
    std::string weekdays[7] {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    return weekdays[weekDay];
    
}

std::string printDay(int day){
    
    if(day < 1 || day >31){
        throw std::logic_error("hmmmm thats a wrong day");
    }
    
    std::string days[31] = {
        "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth",
        "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth",
        "twenty-first", "twenty-second", "twenty-third", "twenty-fourth", "twenty-fifth", "twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth",
        "thirty-first"
    };
    
    return days[day-1];
    
}

//void calculateAge(int bday, int bmonth , int byear){
//
//
//    if(bday < 0){
//        throw std::logic_error("day must be positive");
//    }
//    if(bmonth < 0){
//        throw std::logic_error("month must be positive");
//    }
//    if(byear < 0){
//        throw std::logic_error("year must be positive");
//    }
//
//    std::cout << "the age is : " << byear << " years and " << bmonth << " months and " << bday <<" days old"<< std::endl;
//}

int main() {
    
    
    //mySuperTime<int,int,int> bday(1992,2,5);
    // mySuperTime<int,std::string,std::string> bday2(1992, "february", "fifth");
    
    
    try {
        time_t rawtime;
        struct tm * timeinfo;
        
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        
        std::cout << timeinfo->tm_year+1900 << std::endl; // 2019-119 = 1900
        std::cout << printMonth(timeinfo->tm_mon) << std::endl; // 0 - Jan, 1 - Feb
        std::cout << printDay(timeinfo->tm_mday) << std::endl; // day of the month
//                std::cout << printDay(32) << std::endl; // day of the month
        
        std::cout << timeinfo->tm_hour << std::endl; // time hour
        std::cout << timeinfo->tm_min << std::endl; // time minute
        std::cout << timeinfo->tm_sec << std::endl; // time second
        std::cout << printWeekDay(timeinfo->tm_wday) << std::endl; // week day - monday tuesday
        std::cout << timeinfo->tm_yday << std::endl; // day of the year
        
        
        Date date(2,3,2015);
        date.whatDateIsIt();
        date.calculateAge();
        
        
    } catch (std::logic_error &ex) {
        std::cout << "ERROR : " << ex.what() << std::endl;
    }
    
}


