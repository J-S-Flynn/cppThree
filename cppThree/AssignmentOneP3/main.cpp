//
//  main.cpp
//  AssignmentOneP3
//
//  Created by J.S.Flynn on 22/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//  Student ID : 201037312
//

#include <iostream> //include the standered input / output functions
#include <string> // include the strung functions
#include <vector> //include vectore sunctions
#include "Person.hpp" //include the person class header file
#include "Student.hpp"//include the student class header file
#include "Staff.hpp" //include the staff header file


vector <Person*> people ; //create a vecor of tyoe Person to store people

using namespace std ; //set namespace to standered namesspace

//studentInfo is responcible for gathering the information on a student
void studentInfo(){
    
    string stuName ;//creats a variable to store the students name
    string stuNo ; //creats a variable to store the students id number
    
    cout << "\n Please Enter The Students Name \n" ;//print massage to the output screen to advise the user
    getline(cin, stuName) ; //takes input for the student name from the user
    
    cout << "\n Please Enter The Student Number \n" ;//prints name to the output window to advise the user
    getline(cin, stuNo) ;//takes input for the student id from the user
    
    people.push_back(new Student(stuName, stuNo)) ; // creats a new sudent object and sednds the name and id to it.
                                                    //the object is then adds the object to the vector
    
}

//staffInfo is responsible for gathering staff information
void staffInfo(){
    
    string staffName ; //creats variable to store staff name
    string telNo ; //cretas a variable to store the staff telephone number
    int offNo ; //creats a variable to store the staff office number
    
    cout << "\n Please Enter The Staff Name \n" ;//prints message to the screen to advise the user
    getline(cin, staffName) ;//gets the staff name from the use input
    
    cout << "\n Please Enter Tellephone Number \n " ;//prints message to the output window to advise the user
    getline(cin, telNo) ;//gets the telephone number from the user input
    
    cout << "\n Please Enter The Office Number \n " ;//prints message to the screen to advise the user
    cin >> offNo ;//gets the office number from the user input
    
    people.push_back(new Staff(staffName, telNo, offNo)) ;//creats a new staff object then send the name, telephone number
                                                          //and offive number to the object and adds the object to the vector
    
}

//printList is responcible for printing out the information for the vector
void printList(){
    
    int num = 1 ;//creates a variable to hold the number of people in the vector
    
    vector <Person*> :: iterator i; //sets the ittorator of the vector class to i
    
    //loop to start at the begining of people and end at the last person in people
    for (i = people.begin() ; i != people.end(); i++){
        cout << "person Number : " << num << "\n\n" ;//prints th eperson number for the object
        (*i)->printDetails(); // calls to the vartual print function in the Person class
        cout << "\n" ; //prints a new line
        num++ ;//incraments the value of num
    }
}

//removePerson is responcible for deleting a Person object from the vector
void removePerson(){
    
    int delPerson ; //creats a variable to hold the number of the Person t be deleted
    
    cout << "\n Here are all the people in the system \n" ; //prints a message to the output window to advise the user
    
    printList() ;//makes a call to the printList funtion to print all Person objects in the vector
    
    cout << "\n please enter the number of the person to deleate \n" ;//prints message to the output window to advise the user
    
    cin >> delPerson ;//get the number of the person to be deleted from the user input
    
    people.erase(people.begin()+delPerson -1) ; //calls the erase funtion from the vector class, the number entered is
                                                //decramented by one to delete the correct entry
}

//optionCheck is a simple function to check the what it is the user wishes to do
void optionCheck(int inCheck){
    
    switch (inCheck){
        case 1 : staffInfo() ; //calls to the staffInfo function
            break ;
        case 2 : studentInfo() ; //calls to the studentInfo function
            break ;
        case 3 : printList() ; //calls to the printList function
            break ;
        case 4 : removePerson() ; //calls to the removePerson function
            break ;
        case 5 : ; //efectivly ends the programe
            break ;
    }
}

//the main thread
int main(int argc, const char * argv[]){
    
    int opChoose ; // creats a variable to store the chose for the use
    string junk ; // creats a variable to store in overflow input
    
    //this loop will continue untill it finds the exit condition
    do{
        system("clear") ;//clears the putput window (does not work in xcode)
        cout << "Please Choose an Option \n" ;//prints message to the output window to advise the user
        
        //prints options to the screen
        cout << "\n 1. Add Staff \n 2. Add Student \n 3. List All  \n 4. Delete Entry \n 5. Quit \n\n" ;
        
        cin >> opChoose ;//gets the value for opChoose from the user input
        getline(cin, junk) ;//gets any overflow from the user after opChoose
        
        optionCheck(opChoose) ;//sends the value of opChoose to the optionCheck punction
        
    }while(opChoose != 5) ;//the exit condition for the loop
    
    return 0; //returns zero if the programme has exicuted correctly 
}

