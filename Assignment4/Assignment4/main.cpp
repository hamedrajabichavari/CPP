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



int main() {
    
//    Customer one(2,"60456655","hamed","rajabi","hamed@yahoo.com",1);
    
    std::ofstream writeFile;
    writeFile.open("../files/myFile.txt",std::ios::app);

//    writeFile << one.toString();
//    writeFile.close();
    
    int newId;
    std::string newPhone;
    std::string newName;
    std::string newLastName;
    std::string newEmail;
    bool newGender;
    std::cout << "what is the id? " << std::endl;
    std::cin >> newId;
    std::cout << "what is the phone? " << std::endl;
    std::cin >> newPhone;
    std::cout << "what is the name? " << std::endl;
    std::cin >> newName;
    std::cout << "what is the last name? " << std::endl;
    std::cin >> newLastName;
    std::cout << "what is the email? " << std::endl;
    std::cin >> newEmail;
    std::cout << "what is the gender? " << std::endl;
    std::cin >> newGender;
    
    Customer newOne(newId,newPhone,newName,newLastName,newEmail,newGender);
    writeFile << newOne.toString()<<"\n";
    writeFile.close();

    
    
    
   
//        int choice;
//        do
//        {
//            printf("1.Create Random file | 2.Add record | 3.Modify record | 4.Delete Record | 5.Search Record | 6.Exit ");
//            scanf("%d", &choice);
//
//            switch (choice)
//            {
//
//                case 1:
////                    CreateRandomFile();
//                    break;
//                case 2:
////                    AddRecord();
//                    break;
//                case 3:
////                    ModifyRecord;
//                    break;
//                case 4:
////                    DeleteRecord();
//                    break;
//                case 5:
////                    SearchRecord();
//                    break;
//                case 6:
//                    break;
//                default:
//                    printf("please enter a valid number\n\n");
//                    break;
//            }
//
//        } while (choice != 6);
//

    
        return 0;
    }

