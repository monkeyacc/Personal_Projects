/*
This program will ask the user whether they would like to enter 
lifting data and/or would like to generate stats.

Author: Miguel Cortez
Date: 6/6/2022
*/

#include <iostream>   // For Input & Output
#include <string>     // For string manipulation functionalities
#include <fstream>    // For reading in files
#include <cassert>    // For the assert statement used to validate file open
#include <vector>     // For vector functionalities
#include <sstream>    // For string operations (i.e parsing)
#include <algorithm>  // For "find" functionalities
#include <cctype>     // For .toupper()

using namespace std;

class Node; // this is the declaration, so that it can be used inside class liftingData below

class liftingData
{
    private:
        int exerWeight;
        int exerReps;
        double exerTimeDuration;
        double exerDistance;
        






};

void welcomeMessage()
{
    cout << "*************************************\n";

    cout << "\nHello Miguel, I hope you had a good workout :)\n"; // add an if state that will display either 'morning', 'evening'? sohuld we print the time and data also?
    cout << "\nWhat would you like to do today?:\n";
    cout << "1. \n";
    cout << "2. \n";
    cout << "3. \n";
    cout << "4. Exit Program\n";

    cout << "\n*************************************\n";

    int userOption;

    cin >> userOption;

    cout << "Great! You've chosen option " << userOption << "!\n";
}

int main()
{
    welcomeMessage();
    

    return 0;
}