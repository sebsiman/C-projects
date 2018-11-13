#include <iostream>

using namespace std;

int main()
{
    int myNum = 5;
    int yourNum = 100;

    cout << ++myNum << endl;//Prefix notation. ++ takes place first.

    cout << yourNum++ << endl;//Postfix notation. ++ takes place afterward.
    cout << yourNum-- << endl;
    cout << yourNum;


    return 0;
}
