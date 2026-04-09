#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    
    while (cin >> a >> b >> c) {
        if (a*b*c == 0) break;

        vector<int> tmp; tmp.push_back(a); tmp.push_back(b); tmp.push_back(c);
        sort(tmp.begin(), tmp.end());

        if ((pow(tmp[0],2)+pow(tmp[1],2)) == pow(tmp[2],2)) cout << "right\n";
        else cout << "wrong\n";
    }

    return 0;
}