#include <iostream>
using namespace std;

int main() {
    int day;
    
    cout << "Enter day number : ";
    cin >> day;
    
    while (day < 1 || day > 7) {
        cout << "Enter number between 1-7: ";
        cin >> day;
    }
    
    switch(day) {
        case 1:cout << "Saturday\n";break;
        case 2:cout << "Sunday\n";break;
        case 3:cout << "Monday\n";break;
        case 4:cout << "Tuesday\n";break;
        case 5:cout << "Wednesday\n";break;
        case 6:cout << "Thursday\n";break;
        case 7:cout << "Friday\n";break;
    }
    
    return 0;
}