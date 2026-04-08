#include <iostream>
using namespace std;

int main() {
    int T, H, W, N;
    cin >> T;
    
    /*
        10 : [2][4]
    */

    for(int t=0;t<T;t++) {
        cin >> H >> W >> N;
        N--;
        int h = (N/H)+1;
        int w = N%H+1;

        cout << w;
        if (h < 10) cout << "0";
        cout << h << "\n";
    }


    return 0;
}