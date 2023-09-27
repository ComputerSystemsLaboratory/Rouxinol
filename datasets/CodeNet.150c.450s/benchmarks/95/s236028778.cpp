#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    while(cin >> n, n) {

        string f;
        int cnt = 0;
        char now, bef = 0;

        for(int i = 0; i < n; ++i) {
            cin >> f;
            now = f[1];
            if(now == bef) {
                ++cnt;
            }
            bef = now;
        }

        cout << cnt << endl;

    }

}