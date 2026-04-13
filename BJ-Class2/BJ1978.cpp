#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, tmp;
    vector<int> nums;
    vector<int> arr; // 1 : 소수 // 0 : 소수가 아님
    arr.assign(1000, 1);

    cin >> N;
    for (int i=0;i<N;i++) {
        cin >> tmp;
        nums.push_back(tmp);
    };

    arr[0] = 0; arr[1] = 0;
    for (int i=2;i*i<1001;i++) {
        if(arr[i] == 1) {
            for (int j=i*i;j<=1001;j+=i) {
                arr[j] = 0;
            }
        }
    }

    int cnt = 0;
    for (int i=0;i<N;i++) {
        cnt += arr[nums[i]];
    };
    cout << cnt;

    return 0;
}