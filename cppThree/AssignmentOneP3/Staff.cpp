//
//  Staff.cpp
//  AssignmentOneP3
//
//  Created by J.S.Flynn on 22/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

#include "Staff.hpp" // include the staff header file
#include <iostream> // include the standered input / output

using namespace std ; // sets the namespace to the standered namespace

//defines the function printDetails declared in the Staff class
void Staff::printDetails(){
    
    cout << "**** staff **** \n" ; //prints message to the output windo to advice the user
    cout << getName() << "\n" ; //gets the name from the staff object
    cout << getTelNo() << "\n" ; //gets the telephone number from the staff object
    cout << getOffNo() << "\n" ;//gets the office number form the staff object
}
