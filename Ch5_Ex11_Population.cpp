// Ch5_Ex11_Population.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program calculates the new population size after the growth which its rate is specified by the user.
// The program outputs the population sizes after growth for the amount of days requested by the user.
//
//Programmer: Aslihan Aria Celik


#include <iostream>
using namespace std;

//the function for calculating the new population after growth
int calculatePopulation(int startSize, int increase) {
  
    return startSize + (startSize * increase / 100);
}

int main()
{
    int startingSize;
    int increasePercentage; 
    int daysToMultiply;

    //prompting the user to enter the starting number of organisms
    //validates the input by making sure it is not smaller than 2
    do {
        cout << "What is the starting number of organisms?" << endl;
        cin >> startingSize;

        if (startingSize < 2) {
            cout << "The value for the starting number of organisms supposed to be greater than equal to 2." << endl;
        }
    } while (startingSize < 2);
    
    //prompting the user to enter the percentaghe of the population increase
    //validates the input by making sure it is not a negative number

    do {
        cout << "What is their average daily population increase?" << endl;
        cout << "Please enter the value of the percentage." << endl;
        cin >> increasePercentage;

        if (increasePercentage < 0) {
            cout << "The value for average daily population increase can not be negative." << endl;
        }
    } while (increasePercentage < 0);

    //prompting the user to enter the number of days they request the calcualtion for
    //validates the input by making sure it is not less than 1

    do {
        cout << "What is the number of days you would like to see the population size with the growth?" << endl;
        cin >> daysToMultiply;

        if (daysToMultiply < 1) {
            cout << "The value for the days cannot be less than 1." << endl;
        }
    } while (daysToMultiply < 1);

    //holding the starting size of the population in a temp variable for calculation purposes
    int newPopulation = startingSize;
    cout << "The population size on day 1, which is the starting size is: " << startingSize << endl;
    //does the calculation for the specified number of days by the user
    for (int i = 1; i <= daysToMultiply; ++i) {
        //temprorarily holds the calcualted population size in the newPopulation variable and updates it each iteration
        newPopulation = calculatePopulation(newPopulation, increasePercentage);
        cout << "The population size on day " << i + 1 << " is: " << newPopulation << endl;
    }
     
    return 0;

}

