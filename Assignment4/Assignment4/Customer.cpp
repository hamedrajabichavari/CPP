//
//  Customer.cpp
//  Assignment4
//
//  Created by Rajabi Chavari, Hamed on 2019-08-16.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "Customer.hpp"
#include <string>


//default constructor
//Customer::Customer()
//:Customer("1","6040000000","xxx","yyy","email@yahoo.com",1){}
//
////overloaded constructor
//Customer::Customer(std::string email)
//:Customer("0","6040000000","xxx","yyy",email,1){}

Customer::Customer(int id, std::string phone, std::string name, std::string lastName, std::string email, bool gender){
    
    this->id = id;
    this->phone = phone;
    this->name = name;
    this->lastName = lastName;
    this->email = email;
    this->gender = gender;
}

//copy constructor
Customer::Customer(Customer const &obj){}
//destructor
Customer::~Customer(){}

//setters
void Customer::setId(int id){
    this->id = id;
}
void Customer::setPhone(std::string phone){
    this->phone = phone;
}
void Customer::setName(std::string name){
    this->name = name;
}
void Customer::setLastName(std::string lastName){
    this->lastName = lastName;
}
void Customer::setEmail(std::string email){
    this->email = email;
}
void Customer::setGender(bool gender){
    this->gender = gender;
}

//getters
int Customer::getId(){
    return id;
}
std::string Customer::getPhone(){
    return phone;
}
std::string Customer::getName(){
    return name;
}
std::string Customer::getLastName(){
    return lastName;
}
std::string Customer::getEmail(){
    return email;
}
bool Customer::getGender(){
    return gender;
}

//functions ~ methods
std::string Customer::toString(){
    return "[ id:" +std::to_string(this->id)+" phone:"+ this->phone+" name:"+this->name+" lastNanme:"+this->lastName+"  email:"+this->email+"  gender:"+std::to_string(this->gender)+" ]" ;
    
}
