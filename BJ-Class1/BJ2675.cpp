#include <iostream>
using namespace std;

int main() {

    int T, R; string input;
    cin >> T;

    for (int t=0;t<T;t++) {
        cin >> R;
        cin >> input;

        for (char s: input) {
            for (int i=0;i<R;i++) cout << s;
        }

        cout << " ";

    }

    return 0;
}