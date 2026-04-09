#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string input; int res = 1;
    getline(cin, input);
    
    if(input.length() == 1 && input[0] == ' '){
        cout << 0;
        return 0;
    }

    for (int i=1;i<input.length()-1;i++) {
        if (input[i] == ' ') res++;
    }
    cout << res;

    return 0;
}