#include <iostream>

using namespace std;

int main()
{
    int num,
        den;
    double fraction;

    cout << "Please enter the numerator: " << endl;
    cin >> num;
    cout << "\nPlease enter the denominator: " << endl;
    cin >> den;
    if (den == 0)
    {
        cout << "The denominator can not be zero." << endl;
        cout << "Please enter a new value: " << endl;
        cin >> den;
    }
    else
    {
        fraction = static_cast<double>(num) / den;
        cout << "\n" << num << " / " << den << " = " << fraction;
    }



    return 0;
}
