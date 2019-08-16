//
//  main.cpp
//  Assignment4
//
//  Created by Rajabi Chavari, Hamed on 2019-08-16.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctype.h>
#include <iomanip>
#include <sstream>
#include "Customer.hpp"
#include "functions.hpp"



int main() {
    
//    Customer one(2,"60456655","hamed","rajabi","hamed@yahoo.com",1);
    
    
    
    
   
        int choice;
        do
        {
            printf("1.Create Random file | 2.Add record | 3.Modify record | 4.Delete Record | 5.Search Record | 6.Exit ");
            scanf("%d", &choice);

            switch (choice)
            {

                case 1:
                    creatRandomFile();
                    break;
                case 2:
                    addRecord();
                    break;
                case 3:
//                    ModifyRecord;
                    break;
                case 4:
//                    DeleteRecord();
                    break;
                case 5:
//                    SearchRecord();
                    break;
                case 6:
                    break;
                default:
                    printf("please enter a valid number\n\n");
                    break;
            }

        } while (choice != 6);


    
        return 0;
    }

