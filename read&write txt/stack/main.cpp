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
    
    //prototype
//void print_header();
//void print_footer(double average);
//void print_student(const std::string &student, int score);
//int process_response(const std::string &response, const std::string &answer_key);


    int main() {
        
        std::ifstream infile;
        std::ofstream outfile;
        
        infile.open("../files/pawPatrol.txt");
        outfile.open("../files/pawPatrolwithNumbers.txt");
        if (infile.fail()) {
            std::cerr << "it is not readable" << std::endl;
        }
        if (outfile.fail()) {
            std::cerr << "copy process failed" << std::endl;
        }
        std::string line;
        int lineNumber{1};
        while (std::getline(infile,line)) {
            outfile <<std::setw(3) <<std::left << lineNumber << line <<std::endl;
            std::cout <<std::setw(3) <<std::left << lineNumber << line <<std::endl;
            lineNumber+=1;
       
        }
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

return 0;
}


