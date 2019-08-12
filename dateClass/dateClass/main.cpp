//
//  main.cpp
//  dateClass
//
//  Created by Rajabi Chavari, Hamed on 2019-08-07.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//


#include <iostream>
#include <string>
#include "Date.hpp"
#include <stack>
#include <vector>
#include <ctype.h>
#include "Employee.hpp"
#include "Transaction.hpp"
#include "Time.hpp"


    int main() {
        
//        Employee *emp1 = new Employee("saygin" , "david" , "6048759874" , "saygin@yahoo.ca" , new Date(2,7,2019,"wednesday"));
//        emp1->whatEmployeeIs();
//
        
        Transaction *tra1 = new Transaction(200 , "checking" , new Date(2,7,2019,"wednesday"),new Time("AM",2,3,4));
        tra1->whatTransactionIs();
        
        
        
     
        
        Date one;
        one.whatDateIsIt();
        std::cout << "----------------------------"<< std::endl;

        Date two(29,2,2000,"monday");
        two.whatDateIsIt();

        std::cout << "----------------------------"<< std::endl;

//        Date copytwo(two);
//        copytwo.whatDateIsIt();
//        std::cout << "----------------------------"<< std::endl;

        return 0;
    }

