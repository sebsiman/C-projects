#include <iostream>

using namespace std;
/*
Programmer: Sebastian Siman
Purpose: Calculate the boiling point of water in degrees Celsius
*/

int main()
{
    int degF = 212;
    double degC;

    degC = 5.0/9 * (degF - 32);
    cout << "The boiling point of water in Fahrenheit  is 212. \nWhen converted to Celsius it is: " << degC << endl;

    return 0;
}
