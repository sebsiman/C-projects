#include <iostream>

using namespace std;

int main()
{
    short myUpperNumber = 32767;
    myUpperNumber = myUpperNumber + 1;
    cout << myUpperNumber << endl;

    short myLowerNumber = -32768;
    myLowerNumber = myLowerNumber - 1;
    cout << myLowerNumber << endl;
    return 0;
}
