#include <iostream>

using namespace std;

/*
Programmer: Sebastian Siman
Purpose: This program calculates the area of a trapezoid
*/


int main()
{

    //variable initialization
    int baseA = 7;
    int baseB = 18;
    int height = 9;
    double area; //initialized as a double to include decimal points in final answer

    cout << "This program calculates the area of a trapezoid.\n" << endl;
    area = 1.0/2 * (baseA + baseB) * height; //formula to calculate the area
    cout << "The area is: " << area << endl;

    return 0;
}
