//
//  Transaction.cpp
//  dateClass
//
//  Created by Rajabi Chavari, Hamed on 2019-08-12.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "Transaction.hpp"
#include "Date.hpp"
#include "Time.hpp"


int Transaction::getAmount(){
    return amount;
}

std::string Transaction::getAccountType(){
    return accountType;
}

//default constructor
Transaction::Transaction() :
Transaction(0,"unknown",new Date(0,0,0,"monday"),new Time("AM",0,0,0)){
    
}
//overloaded constructor
Transaction::Transaction(int amount,std::string accountType,Date *hiringdate,Time *hiringtime){
    
    this->amount = amount;
    this->accountType = accountType;
    this->hiringdate = hiringdate;
    this->hiringtime = hiringtime;
}
Transaction::~Transaction(){
    
}
void Transaction::whatTransactionIs(){
    std::cout << this->amount << "," << this->accountType << std::endl;
    
    (this->hiringdate)->whatDateIsIt();
     (this->hiringtime)->whatTimeIsIt();
    
}
