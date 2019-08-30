#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Date{
    
private:
    
    int year;
    std::string month;
    std::string fromWhere;
    
public:
    
    int getYear();
    void setYear(int year);
    
    std::string getMonth();
    void setMonth(std::string month);
    
    std::string getFromWhere();
    void setFromWhere(std::string fromWhere);
    
    
    //default constructor
    Date();
    //overloaded constructor
    Date(int year , std::string month ,std::string fromWhere);
    //copy constructor
    Date(Date const &obj);
    //destructor
    ~Date();
    
    void whatDateIsIt();
};

#endif /* Date_hpp */
