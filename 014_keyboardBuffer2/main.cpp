#include <iostream>

using namespace std;

int main()
{
    int aNumber;
    int bNumber;

    cout << "Enter an integer: " << endl;
    cin >> aNumber;
    cin.ignore(); // Ignores X characters
    cin.sync();

    if (cin.fail())
    {
        cout << "Wrong data type!" << endl;
        cout << "Please run the program again." << endl;
    }
    else
    {
        cout << "You entered: " << aNumber << endl;
        cout << "Enter another number: " << endl;
        cin >> bNumber;
        cout << "Your 2nd number is: " << bNumber << endl;
    }

    return 0;
}
