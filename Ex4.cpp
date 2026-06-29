#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int i = 0;
    cout << "Even numbers smaller than " << endl;
    while(i < n) {
        if(i % 2 == 0)
            cout << i << endl;
        i++;
    }
    
    return 0;
}