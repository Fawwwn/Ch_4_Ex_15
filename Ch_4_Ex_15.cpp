/*
Title: Chapter 4 Example 15

File Name: Ch_4_Ex_15

Programmer: Isaiah Pryor

Date: 12/13/24

Requirements: A program that asks for the weight of the package in kg between 0-20 and 
the distance is is to be shipped, then displays the charges for the package.
*/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double weight, distance;
    double ratePer500Miles, totalCharge;

    cout << "Enter the weight of the package in kilograms: ";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Please enter a weight greater than 0 and less than or equal to 20 kg." << endl;
        return 1;
    }

    cout << "Enter the distance in miles: ";
    cin >> distance;

    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Please enter a distance between 10 and 3000 miles." << endl;
        return 1;
    }

    if (weight <= 2) {
        ratePer500Miles = 1.10;
    }
    else if (weight <= 6) {
        ratePer500Miles = 2.20;
    }
    else if (weight <= 10) {
        ratePer500Miles = 3.70;
    }
    else {
        ratePer500Miles = 4.80;
    }

    int units = ceil(distance / 500);

    totalCharge = ratePer500Miles * units;

    cout << "The shipping charge is: $" << totalCharge << endl;

    return 0;
}
