#include <iostream>
/*
Programmer: Sebastian Siman
Date: 09/18/2018
Purpose: Divide the 646 pennies into the different coins.
*/

using namespace std;

int main()
{
    //Variable Initialization
    int numOfPennies = 646;
    const int halfDollar = 50; //Initialized as integers instead of doubles to receive integer value as a result instead of a decimal number of coins.
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int pennies = 1;
    int totalHalfDollars,
        totalQuarters,
        totalDimes,
        totalNickels,
        totalPennies;

    cout << "To begin, there are " << numOfPennies << " pennies." << endl;

    //Calculating the totals for each coin as well as updating the number of pennies as the algorithm progresses.
    totalHalfDollars = numOfPennies / halfDollar;
        numOfPennies = numOfPennies - (totalHalfDollars * halfDollar);
    totalQuarters = numOfPennies / quarter;
        numOfPennies = numOfPennies - (totalQuarters * quarter);
    totalDimes = numOfPennies / dime;
        numOfPennies = numOfPennies - (totalDimes * dime);
    totalNickels = numOfPennies / nickel;
        numOfPennies = numOfPennies - (totalNickels * nickel);
    totalPennies = numOfPennies / pennies;
        numOfPennies = numOfPennies - (totalPennies * pennies);

    //Display calculated values.
    cout << "When divided among different coins the result is:\n" << endl;
    cout << "Half Dollars: \t" << totalHalfDollars << endl;
    cout << "Quarters: \t" << totalQuarters << endl;
    cout << "Dimes: \t\t" << totalDimes << endl;
    cout << "Nickels: \t" << totalNickels << endl;
    cout << "Pennies: \t" << totalPennies << endl;

    return 0;
}
