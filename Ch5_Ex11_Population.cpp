// Ch5_Ex11_Population.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
using namespace std;

int calculatePopulation(int startSize, int increase) {
    int newPopulation;
    newPopulation = startSize + (startSize * increase / 100);
    return newPopulation;
}

int main()
{
    int startingSize;
    int increasePercentage; //??????????
    int daysToMultiply;

    do {
        cout << "What is the starting number of organisms?" << endl;
        cin >> startingSize;

        if (startingSize < 2) {
            cout << "The value for the starting number of organisms supposed to be greater than equal to 2." << endl;
        }
    } while (startingSize < 2);
    
    do {
        cout << "What is their average daily population increase?" << endl;
        cout << "Please enter the value of the percentage." << endl;
        cin >> increasePercentage;

        if (increasePercentage < 0) {
            cout << "The value for average daily population increase can not be negative." << endl;
        }
    } while (increasePercentage < 0);

    do {
        cout << "What is the number of days you would like to see the population size with the growth?" << endl;
        cin >> daysToMultiply;

        if (daysToMultiply < 1) {
            cout << "The value for the days cannot be less than 1." << endl;
        }
    } while (daysToMultiply < 1);

    int newPopulation = startingSize;
    cout << "The population size on day 1, which is the starting size is: " << startingSize << endl;
    for (int i = 0; i < daysToMultiply; i++) {
        newPopulation = calculatePopulation(newPopulation, increasePercentage);
        cout << "The population size on day " << i + 2 << " is: " << newPopulation << endl;
    }
     


}

