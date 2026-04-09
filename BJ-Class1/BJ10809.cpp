#include <iostream>
using namespace std;

int main() {
    int result[26]; fill_n(result, 26, -1);
    string input; cin >> input;

    for(int i=0;i<input.length();i++) {
        int idx = input[i]-'a';
        if (result[idx] == -1) result[idx] = i;
    }

    for (int r: result) cout << r << " ";

    return 0;
}