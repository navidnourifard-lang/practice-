#include <iostream>
using namespace std;

int main() {
    int day;
    
    do {
        cout << "Enter day number : ";
        cin >> day;
        
        if (day >= 1 && day <= 7) {
            if (day == 1) {
                cout << "Saturday is day 1 of the week.\n";
            } else if (day == 2) {
                cout << "Sunday is day 2 of the week.\n";
            } else if (day == 3) {
                cout << "Monday is day 3 of the week.\n";
            } else if (day == 4) {
                cout << "Tuesday is day 4 of the week.\n";
            } else if (day == 5) {
                cout << "Wednesday is day 5 of the week.\n";
            } else if (day == 6) {
                cout << "Thursday is day 6 of the week.\n";
            } else if (day == 7) {
                cout << "Friday is day 7 of the week.\n";
            }
        } else {
            cout << "Invalid day number! Try again.\n";
            continue; 
        }
        
        break;   
        
    } while (true);
    
    return 0;
}