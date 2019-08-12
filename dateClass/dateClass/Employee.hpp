//
//  Employee.hpp
//  dateClass
//
//  Created by Rajabi Chavari, Hamed on 2019-08-08.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Date.hpp"


class Employee{
    
    
    private:

    std::string name;
    std::string lastname;
    std::string email;
    std::string phone;
    Date *hiringdate;
    
public:
    
    std::string getName();
    void setName(std::string name);

    std::string getLastname();
    void setLastname(std::string lastname);

    std::string getEmail();
    void setEmail(std::string email);

    std::string getPhone();
    void setPhone(std::string phone);
    
    //default constructor
    Employee();
    //overloaded constructor
    Employee(std::string name,std::string lastname,std::string email,std::string phone,Date *hiringdate);
    Date* getDate();
    //destructor
    ~Employee();
    
    void whatEmployeeIs();
    
};

#endif /* Employee_hpp */
