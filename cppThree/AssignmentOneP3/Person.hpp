//
//  Person.hpp
//  AssignmentOneP3
//
//  Created by J.S.Flynn on 22/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

//declared the Person class
#ifndef Person_hpp
#define Person_hpp

#include <string> //include the string functions

using namespace std ;// sets the namespace to the standered namespace

//defines class Person
class Person{
    
    
    protected :
    string name ;//creats a protected variable name
    
    //sets everything below to public
    public :
    
    //creats constuctors for the Person class
    Person(string n): name{n} {} ;
    Person() {} ;
    
    //creats setters and getters for class
    void setName(string n){
        name = n ;
    }
    
    string getName(){
        return name ;
    }
    
    virtual void printDetails() ;//declares printDetails function to be defined in Person.cpp
    
};

//this line is perticulerly important in this class as it will stop the class being loaded multiple times as
//its subclasses are created, gaurding against class redefanition 
#endif /* Person_hpp */

