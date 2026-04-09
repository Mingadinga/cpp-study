#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int tmp = a*b*c;
    string num = to_string(tmp);
    int res[10] = {};

    for (char s:num) res[s-'0']++;
    for (int i:res) cout << i << "\n";

    return 0;
}