#include <iostream>
using namespace std;
#include <cstdio>

int main() {
    int n;
    cin >> n;
    bool a[4][14];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 14; j++) {
            a[i][j] = 0;
        }
    }
    char m, M;
    int k;
    for (int i = 0; i < n; i++){
        cin >> m >> k;
        if (m == 'S') a[0][k] = 1;
        if (m == 'H') a[1][k] = 1;
        if (m == 'C') a[2][k] = 1;
        if (m == 'D') a[3][k] = 1;
    }
    for (int i = 0; i < 4; i++){
        for (int j = 1; j < 14; j++){
            if (a[i][j] == 0){
                if (i == 0) M = 'S';
                if (i == 1) M = 'H';
                if (i == 2) M = 'C';
                if (i == 3) M = 'D';
                cout << M << " " << j << "\n";
            }
        }
    }

    return 0;
}