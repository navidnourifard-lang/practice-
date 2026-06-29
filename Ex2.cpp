#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int i = 1;
    cout << "Divisors of " << endl;
    while(i <= n) {
        if(n % i == 0)
            cout << i << endl;
        i++;
    }
    
    return 0;
}