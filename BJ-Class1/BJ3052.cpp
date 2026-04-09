#include <iostream>
#include <vector>
using namespace std;



int main() {

    vector<int> arr;
    int tmp;
    while (cin >> tmp) {
        arr.push_back(tmp);
    }

    int remains[42] = {};
    for (int i: arr) {
        remains[i%42]++;
    }
    int res = 0;
    for(int r: remains) {
        if (r!=0) res++;
    }

    cout << res;

    return 0;
}

