#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)


int a[110][110];

int main() {
    int r, c;
    cin >> r >> c;
    rep(i, r) {
        rep(j, c) {
            cin >> a[i][j];
        }
    }
    rep(i, r) {
        int sum = 0;
        rep(j, c) {
            sum += a[i][j];
            cout << a[i][j] << ' ';
        }
        cout << sum <<endl;
        a[i][c] = sum;
    }

    int tot = 0;
    rep(i, c) {
        int sum = 0;
        rep(j, r) {
            sum += a[j][i];
        }
        cout << sum << ' ';
        tot += sum;
        a[r][i] = sum;
    }

    cout << tot << endl;
}
