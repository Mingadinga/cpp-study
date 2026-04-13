#include <iostream>
using namespace std;

int main() {
    int N, T, P;
    int t_sum = 0;
    int arr[6];

    cin >> N;
    for (int i=0;i<6;i++) {
        cin >> arr[i];
    }
    cin >> T >> P;
    for (int i=0;i<6;i++) {
        if (arr[i] == 0) continue;
        t_sum += ((arr[i]-1)/T)+1;
    }

    cout << t_sum << "\n";
    cout << N / P << " " << N % P;

    return 0;
}