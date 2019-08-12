//
//  Employee.cpp
//  dateClass
//
//  Created by Rajabi Chavari, Hamed on 2019-08-08.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "Employee.hpp"
#include "Date.hpp"


std::string Employee::getName(){
    return name;
}

std::string Employee::getLastname(){
    return lastname;
}
std::string Employee::getEmail(){
    return email;
}
std::string Employee::getPhone(){
    return phone;
}


//default constructor
Employee::Employee() :
Employee("unknown","unknown","unknown","unknown",new Date(0,0,0,"monday")){
    
}
//overloaded constructor
Employee::Employee(std::string name,std::string lastname,std::string email,std::string phone,Date *hiringdate){
    
    this->name = name;
    this->lastname = lastname;
    this->email = email;
    this->phone = phone;
    this->hiringdate = hiringdate;
}
Employee::~Employee(){
    
}
void Employee::whatEmployeeIs(){
    std::cout << this->name << "," << this->lastname << "," << this->email << "," << this->phone << "," << std::endl;

    (this->hiringdate)->whatDateIsIt();

}
