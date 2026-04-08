#include <iostream>
using namespace std;

int main() {

    int N, sum = 0;
    char tmp[101];

    cin >> N;
    cin >> tmp;

    for (int i=0;i<N;i++) sum += tmp[i]-'0';

    cout << sum;

    return 0;
}