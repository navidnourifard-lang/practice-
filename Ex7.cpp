#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    cout << "Common divisors of " << a << " and " << b << endl;
    int i = 1;
    while(i <= a && i <= b) {
        if(a % i == 0 && b % i == 0)
            cout << i << endl;
        i++;
    }
    
    return 0;
}