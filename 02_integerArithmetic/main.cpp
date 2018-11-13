#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    //cout << "5/3 = " << 5.0 / 3 << endl;

    int numerator = 5;
    int denominator = 3;

    cout << numerator << "/" << denominator << " = " << static_cast<double>(numerator) / denominator;


    return 0;
}
