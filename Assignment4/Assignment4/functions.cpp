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
    
}

void addRecord(){

    
    std::ofstream writeFile;
    writeFile.open("../files/myFile.txt",std::ios::app);
    
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

//void modifyRecord(){
// 
//    
//    std::ifstream readFile;
//    readFile.open("../files/myFile.txt");
//    std::string searchName;
//    std::cout << "search by name : what is the name? " << std::endl;
//    std::cin >> searchName;
//    
//    std::cout << " what is the new name? " << std::endl;
//    std::cin >> newName;
//    
//    std::string line;
//    while (std::getline(readFile,line)) {
//        
//        if(line.find(searchName) < 10000  ){
//           line.replace(line.find(searchName),searchName.length(),newName);
//        }
//    }
//}
//
//
//}


void deleteRecord(){
    
    std::ifstream readFile;
    readFile.open("../files/myFile.txt");
    if (readFile.fail()) {
        std::cerr << "it is not readable" << std::endl;
    }
    std::string searchName;
    std::cout << "search by name : what is the name? " << std::endl;
    std::cin >> searchName;
    
    std::string line;
    while (std::getline(readFile,line)) {
        
        if(line.find(searchName) < 10000  ){
            line.erase(line.begin(), line.end());
//            line.erase();
        }
    }
}




void searchRecord(){
    
    std::ifstream readFile;
    readFile.open("../files/myFile.txt");
    if (readFile.fail()) {
        std::cerr << "it is not readable" << std::endl;
    }
    std::string searchName;
    std::cout << "search by name : what is the name? " << std::endl;
    std::cin >> searchName;
    
                std::string line;
                while (std::getline(readFile,line)) {
                    //"10213 hamed".find("hamed");
                    if(line.find(searchName) < 10000  ){
                        std::cout << line << std::endl;
                    }
                }
}
