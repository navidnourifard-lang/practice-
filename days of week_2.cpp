#include<iostream>
using namespace std;

int main()
{
    int day;
    cout << "Please enter a number between 1 and 7" << endl;
    cin >> day;

    if (day == 1) {
        cout << "saturday" << endl;
    } else if (day == 2) {
        cout << "Sunday" << endl;
    } else if (day == 3) {
        cout << "Monday" << endl;
    } else if (day == 4) {
        cout << "Tuesday" << endl;
    } else if (day == 5) {
        cout << "Wednesday" << endl;
    } else if (day == 6) {
        cout << "Thursday" << endl;
    } else if (day == 7) {
        cout << "Friday" << endl;
    } else {
        cout << "The number entered is not valid. Please enter a number between 1 and 7" << endl;
    }

    return 0;
}