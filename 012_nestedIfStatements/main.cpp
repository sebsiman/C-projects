#include <iostream>

using namespace std;

int main()
{
    int smallestNum = 0;
    int largestNum = 999;
    int userNum;

    cout << "Please enter a number between 0 and 999." << endl;
    cin >> userNum;
    if (userNum <= 999  && userNum >= 0)
    {
        cout << "\nGood job!" << endl;
        if (userNum < 10)
        {
            cout << "Your number has 1 digit." << endl;
        }
        else if (userNum < 100)
        {
            cout << "Your number has 2 digits." << endl;
        }
        else if (userNum < 1000)
        {
            cout << "Your number has 3 digits." << endl;
        }

    }
    else if (userNum > 999)
    {
        cout << "Invalid input. Please restart the program and enter a number between 0 and 999." << endl;
    }
    else if (userNum < 0)
    {
        cout << "Invalid input. Please restart the program and enter a number between 0 and 999." << endl;
    }


    return 0;
}
