#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    int h, m;
    h = H;
    m = M-45;

    if (m<0) {
        m += 60;
        h--;
        if (h<0) h+=24;
    }

    cout << h << " " << m;

    return 0;
}