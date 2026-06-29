#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Two-digit even numbers smaller than " << n << endl;
    int i = 10;
    while(i < n && i < 100) {
        if(i % 2 == 0)
            cout << i << endl;
        i++;
    }
    
    return 0;
}