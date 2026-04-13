#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int R, N, M;
vector<int> nums; // 대상
vector<int> temp; // 조합
int max_n = 0;

void comb(int cur_i, int start_i) {
    if (cur_i == R) { // R : 조합 개수
        int res = accumulate(temp.begin(), temp.end(), 0);
        if (res > max_n && res <= M) {
            max_n = res;
        }
        return;
    }
    for (int i=start_i;i<nums.size();i++) {
        temp[cur_i] = nums[i];
        comb(cur_i+1, i+1);
    }
}


int main() {
    cin >> N >> M;
    
    R = 3;
    temp.assign(R, 0);

    int tmp;
    for(int i=0;i<N;i++) {
        cin >> tmp;
        nums.push_back(tmp);
    }

    comb(0, 0);
    
    cout << max_n;

    return 0;
}