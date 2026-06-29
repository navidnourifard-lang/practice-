#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    double min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    
    cout << "Maximum: " << max << "\n";
    cout << "Minimum: " << min << "\n";
    
    return 0;
}