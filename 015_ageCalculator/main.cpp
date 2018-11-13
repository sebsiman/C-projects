#include <iostream>
#include <string>

using namespace std;

int main()
{
    int userAge;
    string userName;

    cout << "Hello, what is your age?\n" << endl;
    cin >> userAge;
    cin.ignore();
    cin.sync();
    cout << "\nWhat is your name?\n" << endl;
    getline(cin, userName);
    cout << "\nHello " << userName << " you are " << userAge << " years old.\n";


    return 0;
}
