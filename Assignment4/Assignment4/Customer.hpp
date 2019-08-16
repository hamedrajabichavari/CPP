//
//  Customer.hpp
//  Assignment4
//
//  Created by Rajabi Chavari, Hamed on 2019-08-16.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Customer{
    
private:
    
    int id;
    std::string phone;
    std::string name;
    std::string lastName;
    std::string email;
    bool gender;
    
public:
    //default constructor
    Customer();
    //overloaded constructor
    Customer(std::string email);
    Customer(int id, std::string phone, std::string name, std::string lastName, std::string email, bool gender);
    //copy constructor
    Customer(Customer const &obj);
    //destructor
    ~Customer();
    
    //setters
    void setId(int id);
    void setPhone(std::string phone);
    void setName(std::string name);
    void setLastName(std::string lastName);
    void setEmail(std::string email);
    void setGender(bool gender);
    
    
    //getters
    int getId();
    std::string getPhone();
    std::string getName();
    std::string getLastName();
    std::string getEmail();
    bool getGender();
    
    //functions ~ methods
    std::string toString();
    
    
};




#endif /* Customer_hpp */
