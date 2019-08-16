//
//  functions.cpp
//  Assignment4
//
//  Created by Rajabi Chavari, Hamed on 2019-08-16.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "functions.hpp"
#include <iostream>
#include <string>
#include "Customer.hpp"
#include <fstream>


void creatRandomFile(){
    
    std::ofstream writeFile;
    writeFile.open("../files/myFile.txt");
    
    writeFile << one.toString();
    writeFile.close();
}

void addRecord(){

    
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

}
