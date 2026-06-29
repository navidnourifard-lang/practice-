#include<iostream>
using namespace std;

int main()
{
    int day;
    cout << "please enter day number between 1 and 7 ";
    cin >> day;

    switch (day) {
        case 1:cout << "Saturday is first day"<< endl; break;
        case 2:cout <<"Sunday is Second day" << endl; break;
        case 3:cout << "Monday is third day" << endl; break;
        case 4:cout << "Tuesday is fourth day" << endl;break;
        case 5:cout << "Wednesday is fifth day" << endl;break;
        case 6: cout << "Thursday is sixth day" << endl;break;
        case 7: cout << " Friday is seventh day"<<endl;break;
        default:
            cout << "Your entred day number is mistake try again and Enter number between 1 and 7 " << endl;
    }

    return 0;
}