#include <iostream>
using namespace std;

int main() {
    double score;
    
    cout << "Enter score : ";
    cin >> score;
    
    while (score < 0 || score > 20) {
        cout << "Invalid! Enter score between 0-20: ";
        cin >> score;
    }
    
    if (score >= 18 && score <= 20) {
        cout << "Score " << score << " => Grade: A (Excellent)\n";
    } else if (score >= 16 && score < 18) {
        cout << "Score " << score << " => Grade: B (Good)\n";
    } else if (score >= 14 && score < 16) {
        cout << "Score " << score << " => Grade: C (Average)\n";
    } else if (score >= 12 && score < 14) {
        cout << "Score " << score << " => Grade: D (Below Average)\n";
    } else if (score >= 10 && score < 12) {
        cout << "Score " << score << " => Grade: E (Weak)\n";
    } else if (score >= 0 && score < 10) {
        cout << "Score " << score << " => Grade: F (Fail)\n";
    }
    
    return 0;
}