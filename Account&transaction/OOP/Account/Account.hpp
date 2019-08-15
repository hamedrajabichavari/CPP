//
//  Account.hpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-08-14.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include "../Person/Person.hpp"
#include <vector>
#include <iostream>
#include <iomanip>

class Account{
    
private:
    
    unsigned int number;
    std::vector<int> type; //checking,saving,credit (using vector is for felexibility,if we want add some types in future)
    std::vector<double> balance; // checking   saving   credit
    int branchNumber;
    Person *holder;
    
public:
    //default constructor
    Account();
    //overloaded constructor
    Account(unsigned int number, Person *holder);
    Account(unsigned int number, std::vector<int> type, std::vector<double> balance, int branchNumber, Person *holder);
    //copy constructor
    Account(Account const &obj);
    //destructor
    ~Account();
    
    //setters
    void setNumber(unsigned int number);
    void setType(std::vector<int> type);
    void setBalance(std::vector<double> balance);
    void setBranchnumber(unsigned int branchNumber);
    void setHolder(Person *holder);
    
    //getters
    unsigned int getNumber();
    std::vector<int> getType();
    std::vector<double> getBalance();
    int getbranchNumber();
    Person getPerson();
    
    
    //functions ~ methods
    //use bool because you have limitation for withdrawl&transfer&deposit,more that 1,000$!!!
    bool deposit(double amount , int type);
    bool withdrawl(double amount , int type);
    bool transfer(double amount,int source, int destination);
    void toString();
    
    
    
};



#endif /* Account_hpp */
