#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int i = 0;
    cout << "Numbers smaller than " << n << endl;
    while(i < n) {
        cout << i << endl;
        i++;
    }
    
    return 0;
}