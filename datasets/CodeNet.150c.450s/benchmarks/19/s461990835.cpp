#include    <iostream>

using namespace std;

int main() {
    while(1) {
        int i, j;

        cin >> i >> j;
        if(i == 0 && j == 0) break;
        if(i < j)   cout << i << ' ' << j << endl;
        else        cout << j << ' ' << i << endl;
    }

    return 0;
}
