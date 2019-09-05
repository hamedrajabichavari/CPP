//
//  Node.hpp
//  Assignment8
//
//  Created by Rajabi Chavari, Hamed on 2019-09-05.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
#include <stdio.h>
#pragma once
//add template for flexible linked list
template <typename T>
class Node {
    
//    friend class LinkedList; //linked list can access Node class
    
public:
    T data;
    Node<T> *nextPtr;
    Node<T> *prevPtr;
    
    //                  ______
    //                   |      |
    //      prevPtr <--| data |-->nextPtr
    //                 |______|
    
public:
    Node<T>();//default constructor signature
    Node<T>(const T &data);  //overloaded constuctor signature
    T getData() const;  //getter signature
};

template <typename T>
Node<T>::Node() // default constructor implementation
: Node(NULL) //delegated constructor
{
}

template <typename T>
Node<T>::Node(const T &data) //overloaded constructor implementation
: data(data),
nextPtr(nullptr), prevPtr(nullptr)
{
}

template <typename T>
T Node<T>::getData() const // getter implementation
{
    return data;
}


#endif /* Node_hpp */
