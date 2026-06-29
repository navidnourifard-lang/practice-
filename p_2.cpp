#include<iostream>
using namespace std;

int main() {
    int number ;
    cout << "Enter a number: ";
    cin >> number ;

    for (int p = 1; p <= number ; p++) {
        if (number % p == 0)
            cout << p << endl;
    }
    return 0;
}