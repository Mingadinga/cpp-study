#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;

    for(int t=0;t<T;t++) {
        string input; cin >> input;
        int sum = 0, score = 1;
        
        for (char c: input) {
            if (c == 'X') score = 0;
            sum += score++;
        }

        cout << sum << "\n";
    }

    return 0;
}