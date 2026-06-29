#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the three angles of the triangle.";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && (a + b + c) == 180) {
        cout << " correct " << endl;
    } else {
        cout << "ṃistake" << endl;
    }

    return 0;
}