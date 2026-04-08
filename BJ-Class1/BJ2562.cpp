#include <iostream>
using namespace std;

int main() {
    int arr[9]; int max=0; int max_idx=0;
    for (int i=0;i<9;i++) cin >> arr[i];
    for (int i=0;i<9;i++) {
        if (max < arr[i]) {
            max = arr[i];
            max_idx = i+1;
        }
    }
    
    cout << max << "\n" << max_idx << "\n";

    return 0;
}