#include <bits/stdc++.h>
#define FOR(i, m, n) for(int i = m; i <= n; i++)
using namespace std;

int main(){
    int n, x;
    while (true) {
        cin >> n >> x;
        if (n == 0 && x == 0) break;
        int cnt = 0;
        FOR(i, 1, n) FOR(j, i+1, n) FOR(k, j+1, n){
            if (i+j+k == x) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}