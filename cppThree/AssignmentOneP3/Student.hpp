//
//  Student.hpp
//  AssignmentOneP3
//
//  Created by J.S.Flynn on 22/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

//declares the student class
#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>// includes the standered input/output
#include "Person.hpp"//includes the header file for Person

//creats the student class and sets it as a subcleass of Person
class Student : public Person {
    
    
    private :
    string studentNo ;//creats private variable for the student number
    
    public :
    
    //constructor for the student class.
    Student(string n , string s){
        name = n ;
        studentNo = s ;
    }
    
    //setters and getters for the student class
    void setStudentNo(string s){
        studentNo = s ;
    }
    
    string getStudentNo(){
        return studentNo ;
    }
    
    void printDetails() ;//declares the printDetails for the student class to be defined in Student.cpp
};

//the next line is responsible for making sure the class is loaded only once to gaurd against redefaniton of a class 
#endif /* Student_hpp */

