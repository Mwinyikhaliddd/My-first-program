#include <iostream>
#include <string>
using namespace std;

int main() {
    

        // VARIABLE DECLARATIONS

    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;
    
        // WELCOME MESSAGE

    cout << "==================================" << endl;
    cout << "       WELCOME TO MY PROGRAM      " << endl;
    cout << "==================================" << endl;
    cout << endl;
    
        // QUESTION 1: NAME

    cout << "What is your name? ";
    getline(cin, name);

        // QUESTION 2: COURSE

    cout << "Which course are you taking (BBIT/BCS)? ";
    getline(cin, course);


    // QUESTION 3: HOBBY

    cout << "What is your favourite hobby? ";
    getline(cin, hobby);


    // QUESTION 4: REASON

    cout << "Why did you choose this course? ";
    getline(cin, reason);


    // QUESTION 5: EXPECTATIONS

    cout << "What do you expect to learn? ";
    getline(cin, expectation);


    // QUESTION 6: DEFINITION

    cout << "What is your definition of programming? ";
    getline(cin, definition);
  
      // DISPLAY PERSONALIZED SUMMARY

    cout << endl;
    cout << "==================================" << endl;
    cout << "       YOUR PERSONAL PROFILE      " << endl;
    cout << "==================================" << endl;

    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Reason for choosing course: " << reason << endl;
    cout << "Learning expectations: " << expectation << endl;
    cout << "Definition of programming: " << definition << endl;

    cout << "==================================" << endl;
    cout << "Thank you for using my program!" << endl;
   return 0;
}

