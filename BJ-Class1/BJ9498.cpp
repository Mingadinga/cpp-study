#include <iostream>
using namespace std;

int main() {

    int score; cin >> score;

    if ((score/10 == 9) || score/10 == 10) cout << "A";
    else if (score/10 == 8) cout << "B";
    else if (score/10 == 7) cout << "C";
    else if (score/10 == 6) cout << "D";
    else cout << "F";

    return 0;
}