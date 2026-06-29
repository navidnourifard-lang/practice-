#include <iostream>
using namespace std;

int main() {
    double num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0) {
        cout << "Number is positive.\n";
    } else if (num < 0) {
        cout << "Number is negative.\n";
    } else {
        cout << "Number is zero.\n";
    }
    
    return 0;
}