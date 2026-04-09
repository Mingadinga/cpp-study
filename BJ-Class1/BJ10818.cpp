#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int N, tmp, min = INT_MAX, max = INT_MIN;

    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> tmp;
        if (tmp < min) min = tmp;
        if (tmp > max) max = tmp;
    }

    cout << min << " " << max;


    return 0;
}