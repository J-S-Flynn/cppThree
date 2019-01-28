//
//  Staff.hpp
//  AssignmentOneP3
//
//  Created by J.S.Flynn on 22/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

//declars the Staff class
#ifndef Staff_hpp
#define Staff_hpp

#include <stdio.h> //include the standered input / output
#include <string> // include the string functions
#include "Person.hpp" // include the header file for person

using namespace std ; // set the namespace to the standered namespace

//declared class staff as a subclass of Person
class Staff : public Person {
    
    private :
    string telNo ;// creats private variable to store telephone number
    int officeNo ; // creats private variable to store office number
    
    //defines everything below as public
    public :
    
    //constructor for the Staff class
    Staff(string n , string t, int o){
        name = n ;
        telNo = t ;
        officeNo = o ;
        
    }
    
    //creat setters and getters for the Staff class
    void setOffNo(int o){
        officeNo = o ;
    }
    
    int getOffNo(){
        return officeNo ;
    }
    
    void setTelNo(string t){
        telNo = t ;
    }
    
    string getTelNo(){
        return telNo ;
    }
    
    void printDetails() ;//declares the printDetails function to be defined in Staff.cpp
};

//the next line makes sure the class is loaded only once to guard against class redefanition 
#endif /* Staff_hpp */

