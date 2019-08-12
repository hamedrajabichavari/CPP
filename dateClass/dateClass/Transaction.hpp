//
//  Transaction.hpp
//  dateClass
//
//  Created by Rajabi Chavari, Hamed on 2019-08-12.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef Transaction_hpp
#define Transaction_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Date.hpp"
#include "Time.hpp"



class Transaction{
    
    
private:
    
    int amount;
    std::string accountType;
    Date *hiringdate;
    Time *hiringtime;
    
public:
    
    int getAmount;
    void setAmount(int amount);
    
    std::string getAccountType();
    void setAccountType(std::string accountType);
    
    //default constructor
    Transaction();
    //overloaded constructor
    Transaction(int amount, std::string accountType,Date *hiringdate, Time *hiringtime);
    Date* getDate();
    Time* getTime();
    //destructor
    ~Transaction();
    
    void whatTransactionIs();
    
};



#endif /* Transaction_hpp */
