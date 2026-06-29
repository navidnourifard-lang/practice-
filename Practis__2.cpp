#include<iostream>
using namespace std;

int main()
{
    for (int p = 1; p <= 1; p++) {
        int number ;
        cout << " Enter your number : ";
        cin >> number ;
        if (number > 0)
            cout << "positive" << endl;
        else if (number < 0)
            cout << "Negative " << endl;
         else 
            cout <<"zero"  <<endl;
    }
    return 0;
}