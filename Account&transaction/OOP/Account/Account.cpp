//
//  Account.cpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-08-14.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "Account.hpp"

//default constructor
Account::Account()
:Account(0,{},{},0,new Person()){} //type and balance is nothimg here

//overloaded constructor
Account::Account(unsigned int number, Person *holder)
:Account(number,{},{},0,holder){}

Account::Account(unsigned int number, std::vector<int> type, std::vector<double> balance, int branchNumber, Person *holder){
    this->number=number;
    this->type=type;
    this->balance=balance;
    this->branchNumber=branchNumber;
    this->holder=holder;
}

//copy constructor
Account::Account(Account const &obj){
    this->number=obj.number;
    this->type=obj.type;
    this->balance=obj.balance;
    this->branchNumber=obj.branchNumber;
    this->holder=obj.holder;
}
//destructor
Account::~Account(){
    delete holder;
}

//setters

void Account::setNumber(unsigned int number){
    this->number=number;
    
}void Account::setType(std::vector<int> type){
    this->type=type;
    
}void Account::setBalance(std::vector<double> balance){
    this->balance=balance;
    
}void Account::setBranchnumber(unsigned int branchNumber){
    this->branchNumber=branchNumber;
    
}void Account::setHolder(Person *holder){
    this->holder=holder;
    
}

//getters
unsigned int Account::getNumber(){
    return number;
}
std::vector<int> Account::getType(){
    return type;
}
std::vector<double> Account::getBalance(){
    return balance;
}
int Account::getbranchNumber(){
    return branchNumber;
}
Person Account::getPerson(){
    return *holder;
}


//functions ~ methods
//use bool because you have limitation for withdrawl&transfer&deposit,more that 1,000$!!!
bool Account::deposit(double amount , int type){
    this->balance.at(type) += amount;
    return true;
}

bool Account::withdrawl(double amount, int type){
    this->balance.at(type) -= amount;
    return true;
}

bool Account::transfer(double amount, int source, int destination){
    this->balance.at(source) -= amount;
    this->balance.at(destination) += amount;
    return true;
}
void Account::toString(){
    holder->toString();
    std::cout << "[ "
    << "number : " << this->number
    << ", branchNumber : " << this->branchNumber
    << " ]"
    << std::endl;

    for(int i = 0; i < this->balance.size(); i+=1){
        std::cout << std::left << " Account " << i << std::right << std::setw(10) << this->balance.at(i)<< " CAD" << std::endl;
    }
}



