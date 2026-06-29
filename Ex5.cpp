#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Prime numbers smaller than "  << endl;
    int num = 2;
    while(num < n) {
        bool isPrime = true;
        int j = 2;
        while(j * j <= num) {
            if(num % j == 0) {
                isPrime = false;
                break;
            }
            j++;
        }
        if(isPrime)
            cout << num << endl;
        num++;
    }
    
    return 0;
}