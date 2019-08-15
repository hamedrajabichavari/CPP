//
//  main.cpp
//  stack
//
//  Created by Rajabi Chavari, Hamed on 2019-07-29.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <string>
#include "functions.hpp"
#include "moreFunctions.hpp"
#include <vector>
#include <ctype.h>
#include <iomanip>
#include "../OOP/Time.hpp"
#include "../OOP/Account/Account.hpp"
#include "../OOP/Person/Person.hpp"
#include <sstream>
//int getTheNumber();

    int main() {
        
       
        //default
//        Person b;
//        b.toString();

        Person *myPerson = new Person("hamed","rajabi","hamed123@yahoo.ca","6045067834","vancouver34",7);
        //2 ways to print
//        a->toString();
//        (*a).toString();
//
        Account myAccount(1, {1,2,3}, {10000,250,500}, 505, myPerson);
        
      
        
//        myAccount.deposit(156.98 , 0);
//        myAccount.withdrawl(200 , 0);
        
//        myAccount.transfer(99,0,1);
//        std::vector<double> myMoney;
//        myMoney = myAccount.getBalance();
//
//        for(double money : myMoney){
//            std::cout << "money : " << money <<std::endl;
//        }
//         myAccount.withdrawl(-2,0);
//        myAccount.deposit(-2,0);
        
         myAccount.transfer(2000,0,1);
         myAccount.toString();
        
        return 0;
    }

        //Account(unsigned int number, int type[], double balance[], int branchNumber, Person holder);
        
//        int typeArr[3] {1,2,3};
//        double balanceArr[3] {1,2,3};
//        Account acc(1,typeArr,balanceArr, 1, a);
//
        
        
        
        
        
        
        
//        //check the input (function)
//        int numberCheck;
//        std::string value;
//        std::cout << "give me a number" << std::endl;
//        std::cin >> value;
//        std::istringstream storedValue{value};
//
//        if(storedValue >> numberCheck){
//            std::cout << "success" << std::endl;
//        }else{
//            std::cout << "that's not a number" << std::endl;
//        }
//
//        return 0;
//    }
//
        
        
//
//        int age = getTheNumber();
//        //string stream
//        std::string a;
//        int b;
//        double c;
//        bool d;
//        //                a    b  c   d
//        std::string str{"hello 5 3.75 1"};
//        std::istringstream stringStream{str};
//
//        stringStream >> a >> b >> c >> d;
//
//        std::cout << "a value is: " << a << std::endl;
//        std::cout << "b value is: " << b << std::endl;
//        std::cout << "c value is: " << c << std::endl;
//        std::cout << "d value is: " <<std::boolalpha<< d << std::endl;
//
//        return 0;
//    }
//
//
//int getTheNumber(){
//    int number;
//    std::cout << "enter your choice: ";
//    std::cin >> number;
//
//    while(!std::cin.good()){
//        std::cout << "ops, not an integer number,try again: ";
//        std::cin.clear();
//        std::cin.ignore(INT_MAX,'\n');
//        std::cin >> number;
//    }
//    return number;
//}
    
//        //function counting punct,alpha,digit.. in a txt file
//        std::ifstream infile;
//        std::ofstream outfile;
//
//        infile.open("../files/littleRed.txt");
//        outfile.open("../files/reports.txt");
//        if (infile.fail()) {
//            std::cerr << "it is not readable" << std::endl;
//        }
//        if (outfile.fail()) {
//            std::cerr << "copy process failed" << std::endl;
//        }
//
//        std::string line;
//        int punctcount=0;
//        int digitcount=0;
//        int spacecount=0;
//        int uppercount=0;
//        int lowercount=0;
//        int alphacount=0;
//        while (std::getline(infile,line)) {
//            for(int i=0; i < line.length(); i+=1){
//                if(ispunct(line[i])){
//                    punctcount+=1;
//                }
//                if(isdigit(line[i])){
//                    digitcount+=1;
//                }
//                if(isspace(line[i])){
//                    spacecount+=1;
//                }
//                if(isupper(line[i])){
//                    uppercount+=1;
//                }
//                if(islower(line[i])){
//                    lowercount+=1;
//                }
//                if(isalpha(line[i])){
//                    alphacount+=1;
//                }
//
//            }
//
//        }
//        outfile <<std::setw(15) <<std::left << "punct"  << punctcount <<std::endl;
//        outfile <<std::setw(15) <<std::left << "digit" << digitcount  <<std::endl;
//        outfile <<std::setw(15) <<std::left << "space" << spacecount <<std::endl;
//        outfile <<std::setw(15) <<std::left << "upper" << uppercount <<std::endl;
//        outfile <<std::setw(15) <<std::left << "lower" << lowercount <<std::endl;
//        outfile <<std::setw(15) <<std::left << "alphabet" << alphacount <<std::endl;
//
        
//        //readAndWriteLineNumbers function
//        std::ifstream infile;
//        std::ofstream outfile;
//
//        infile.open("../files/pawPatrol.txt");
//        outfile.open("../files/pawPatrolwithNumbers.txt");
//        if (infile.fail()) {
//            std::cerr << "it is not readable" << std::endl;
//        }
//        if (outfile.fail()) {
//            std::cerr << "copy process failed" << std::endl;
//        }
//        std::string line;
//        int lineNumber{1};
//        while (std::getline(infile,line)) {
//            outfile <<std::setw(3) <<std::left << lineNumber << line <<std::endl;
//            std::cout <<std::setw(3) <<std::left << lineNumber << line <<std::endl;
//            lineNumber+=1;
//
//        }
        
        
        
        
        
        
        
//        std::oftream writeFile;
//        writeFlie.open("../files/myFile.txt", std::ios::app);
//        std::cout << "file is open and ready for writing"<<std::endl;
//                }if(writeFile.is_open()){
//
//        std::string line;
//        std::cout << "enter some string <0 to exit>" ;
                //        while (std::getline(std::cin,line)){
//            if(line == "0"){
//                break;
//            }
//        }

//        writeFile << line;
//
//        writeFile.close();
        
//
//        std::ifstream filemanager;
//
//        filemanager.open("../files/test2.txt");
//
//        std::string name;
//        std::string answer;
//        std::string key = "ABCDE";
//        int count = 0;
//        int sum=0;
//        double average;
//
//        std::cout << "file summary " << std::endl;
//        std::cout << "--------------------"<< std::endl;
//
//        while(filemanager >> name >> answer){
////            std::cout << name << " : " << answer << std::endl;
//            for (int i = 0 ; i< 5; i+=1) {
//                if(answer[i] == key[i]){
//                    count+=1;
//                }
//
//            }
//
//            std::cout << name << " : " << answer << ": " << count << std::endl;
//            sum = (sum + count);
//            average = (double) sum/5;
//            count =0;
//        }
//        std::cout << "average is : " <<average << std::endl;
//
//
        
//        std::ifstream filemanager;
//
//        filemanager.open("../files/test.txt");
//
//        std::string name;
//        int age;
//        bool isItTrue;
//
//        std::cout << "file summary " << std::endl;
//        std::cout << "--------------------"<< std::endl;
//
//        while(filemanager >> name >> age >> isItTrue){
//            std::cout <<"name: "<< std::left<< std::setw(10) << name ;
//            std::cout << " age: " << std::setw(4) << age << std::right;
//            std::cout << " the information is: " << std::boolalpha << isItTrue << std::endl;
//        }
        
//        std::cout << "----------------------------"<< std::endl;
        
        //close
//        filemanager.close();
        
//        timeTest();
        
//    //if you dont define sth in () means is default
//    Cat delegatedCo{};
//    delegatedCo.introduceYourself();
//    std::cout << "----------------------------"<< std::endl;
//
//    Cat fluffy("fluffy","Black and White",false,10.4,100);
//    fluffy.introduceYourself();
//    fluffy.eat();
//
//    std::cout << "----------------------------"<< std::endl;
//
//    //C++11 syntax
//    Cat sylvester{"sylvester","White",true,5.4,95};
//    sylvester.introduceYourself();
//    sylvester.jump();
//
//    std::cout << "----------------------------"<< std::endl;
//
//    Cat kit{"homer",100};
//    kit.introduceYourself();
//    kit.eat();
//
//    std::cout << "----------------------------"<< std::endl;
//
//    Cat copyfluffy(fluffy);
//    copyfluffy.introduceYourself();
//
//    std::cout << Cat::howManyObject() << "objects in the memory" << std::endl;
//
//    return 0;
//}
//
//    //Array size and type!!!
//    //flexible array---vector
//    std::vector<std::string> students {"sina","siamak","hamed","mariana","jose","daniel"};
//
//    std::cout << "---there are "<< students.size() << " students---" << std::endl;
//    std::cout << "---these are the students---" << std::endl;
//        for (auto student : students){
//            
//            std::cout << student << " ";
//        }
//     std::cout << std::endl;
//
//    std::cout<< "who is the new student?";
//    std::string newStudent;
//    std::cin >> newStudent;
//    students.push_back(newStudent);
//
//    std::cout << "--------new list--------"<<std::endl;
//    std::cout << "---there are "<< students.size() << " students---" << std::endl;
//        for (auto student : students){
//            std::cout << student << " ";
//    }
//    std::cout << std::endl;
//    std::cout << "----------------"<< std::endl;
//
//
//
//    testFactorial();
//    std::cout << "----------------"<< std::endl;
//
//
//
//    testFibo();
//    std::cout << "----------------"<< std::endl;
//
//
//    printMultiplicationTable(11,11);
//    std::cout << "----------------"<< std::endl;
//
//
//    forEachLoop();
//    std::cout << "----------------"<< std::endl;
//
//
//    //using test... to keep the main.cpp clean
//
//    testModify();
//    std::cout << "----------------"<< std::endl;
//
//    testIsPrime();
//    std::cout << "----------------"<< std::endl;
//
//    addSomeStars("hello",'*');
//    std::cout << "----------------"<< std::endl;
//
//    reverseTheWord("hamedRajabi");
//    std::cout << reverseTheWord("hamedRajabi") <<std::endl;
//    std::cout << "----------------"<< std::endl;
//
//    testMimosa();
//    std::cout << "----------------"<< std::endl;
//
//    stackMenuWithPointer();
//    std::cout << "----------------"<< std::endl;
//}



