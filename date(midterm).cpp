#include "Date.hpp"
#include <string>


std::string Date::getMonth(){
    return month;
}

void Date::setMonth(std::string month){
    this->month = month;
}

int Date::getYear(){
    return year;
}

void Date::setYear(int year){
    this->year = year;
}

std::string Date::getFromWhere(){
    return fromWhere;
}

void Date::setFromWhere(std::string fromWhere){
    this->fromWhere = fromWhere;
}

//default constructor
Date::Date():
Date(0,"nomonth","noWhere"){
}

//overloaded constructor
Date::Date(int year , std::string month ,std::string fromWhere){
    
    //check and convert the day to upper case
    std::locale loc;
    std::string temp;
    for (std::string::size_type i=0; i< fromWhere.length(); ++i)
        temp += std::toupper(fromWhere[i],loc);
    
    std::locale loc1;
    std::string temp1;
    for (std::string::size_type i=0; i< month.length(); ++i)
        temp1 += std::toupper(month[i],loc1);
    
    this->year = year;
    this->month = month;
    this->fromWhere = fromWhere;
    
}
//copy constructor
Date::Date(Date const &obj){
    this->year = obj.year;
    this->month = obj.month;
    this->fromWhere = obj.fromWhere;
}

//destructor
Date::~Date(){
    
}
void Date::whatDateIsIt(){
    
    std::string formattedYear;
    
    formattedYear = std::to_string(year);
    
    if(year < 10){
        formattedYear = "0" + std::to_string(year);
    }
    std::cout << formattedYear << "/" << this->month << "/" << this->fromWhere << std::endl;
}

