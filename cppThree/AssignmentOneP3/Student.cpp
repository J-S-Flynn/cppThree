//
//  Student.cpp
//  AssignmentOneP3
//
//  Created by J.S.Flynn on 22/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

#include "Student.hpp" //include the header file for student
#include <iostream> //include the standered input / output functions

using namespace std ; // set the namespace to the standered namespace

//defines the printDetails function declared in student.hpp
void Student :: printDetails(){
    
    cout << " *** student *** \n" ; //prints message to output window to advise user 
    cout << getName() << "\n" ; //gets the name of the student from the student object
    cout << getStudentNo() << "\n" ; //gets the student id of the student from the object 
}