#include <iostream>

using namespace std;

int main()
{
    int aNumber, aNumber2;

    cout << "Enter a number: " << endl;
    cin >> aNumber;
    cout << "Enter another number: " << endl;
    cin >> aNumber2;

    if (aNumber > aNumber2)
        cout << "\n" << aNumber << " is greater than " << aNumber2 << endl;
        else if (aNumber2 > aNumber)
            cout << "\n" << aNumber2 << " is greater than " << aNumber << endl;
        else if (aNumber2 == aNumber)
            cout << "\n" << aNumber2 << " is equal to " << aNumber << endl;

    return 0;
}
