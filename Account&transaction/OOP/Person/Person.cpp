//
//  Person.cpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-08-14.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "Person.hpp"
#include <string>


//default constructor
Person::Person()
:Person("john","doe","john@yahoo.ca","6047568975","vancouver435",0){}

//overloaded constructor
Person::Person(std::string email)
:Person("john","doe",email,"6047568975","vancouver435",0){}

Person::Person(std::string name,std::string lastName,std::string email,std::string phone,std::string address,unsigned int id){
this->name = name;
this->lastName = lastName;
this->email = email;
this->phone = phone;
this->address = address;
this->id = id;
}
//copy constructor
Person::Person(Person const &obj){}
//destructor
Person::~Person(){}

//setters
void Person::setName(std::string name){
    this->name = name;
}
void Person::setLastName(std::string lastName){
    this->lastName = lastName;
}
void Person::setEmail(std::string email){
        this->email = email;
}
void Person::setPhone(std::string phone){
    this->phone = phone;
}
void Person::setAddress(std::string address){
    this->address = address;
}
void Person::setId(unsigned int id){
    this->id = id;
}

//getters
std::string  Person::getName(){
    return name;
}
std::string  Person::getLastName(){
    return lastName;
}
std::string  Person::getEmail(){
    return email;
}
std::string  Person::getPhone(){
    return phone;
}
std::string  Person::getAddress(){
    return address;
}
unsigned int Person::getId(){
    return id;
}

//functions ~ methods
void Person::toString(){
    std::cout <<"[" << "name:" << this->name <<"  lastNanme:"<< this->lastName <<"  email:"<< this->email <<"  phone:"<< this->phone <<"  address:"<< this->address <<"  id:" << this->id << "]" << std::endl;
}
