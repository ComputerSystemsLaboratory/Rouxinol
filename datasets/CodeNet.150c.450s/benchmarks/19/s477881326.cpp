#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 3000;

int main() {
    for (int i = 0; i < MAX_N; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) {
            break;
        } else {
            if (x < y) {
                cout << x << " " << y << endl;
            } else {
                cout << y << " " << x << endl;
            }
        }    
    }
    return 0;
}
