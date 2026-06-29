#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(n < 2) {
        cout << "Not a prime number" << endl;
        return 0;
    }
    
    bool isPrime = true;
    int i = 2;
    while(i * i <= n) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }
    
    if(isPrime)
        cout <<  " is a prime number" << endl;
    else
        cout <<  " is not a prime number" << endl;
    
    return 0;
}