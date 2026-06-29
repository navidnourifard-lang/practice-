#include<iostream>
using namespace std;

int main()
{
for (int i = 1; i <= 1; i++) {
        double score;
        cout << " Enter Score: ";
        cin >> score;
        if (score >= 18 && score <= 20)
            cout <<" A" << endl;
        else if (score >= 16 && score < 18)
            cout << " B" << endl;
        else if (score >= 14 && score < 16)
            cout << " C" << endl;
        else if (score >= 0 && score < 14)
            cout << "Rejected result" << endl;
        else
            cout << "Score is false please try again " << endl;}
    return 0;
}