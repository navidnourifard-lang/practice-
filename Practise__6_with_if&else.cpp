#include<iostream>
using namespace std;

int main()
{
    string day;
    cout << "Give me your day name: ";
    cin >> day;

    if (day == "Saturday")
        cout << "First" << endl;
    else if (day == "Sunday ")
        cout << "Second" << endl;
    else if (day == "Monday")
        cout << "Thrid" << endl;
    else if (day == "Tuesday ")
        cout << "Fourth" << endl;
    else if (day == "Wednesday")
        cout << "Fifth" << endl;
    else if (day == "Thursday ")
        cout << "Sixth " << endl;
    else if (day == "Friday ")
        cout << "seventh" << endl;
    else
        cout << "there is not here" << endl;
    return 0;
}