#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
// #define int long long
#define fi first
#define se second
using namespace std;
typedef pair<int, int> P;

signed main(){
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        int h, m, s, hh, mm, ss;
        int d[24 * 3600 + 100] = {};
        rep(i, 0, n){
            scanf("%d:%d:%d %d:%d:%d", &h, &m, &s, &hh, &mm, &ss);
            int st = h * 3600 + m * 60 + s;
            int ed = hh * 3600 + mm * 60 + ss;
            d[st]++; d[ed]--;
        }
        int MAX = 0;
        rep(i, 1, 24 * 3600 + 10){
            d[i] += d[i - 1];
            MAX = max(MAX, d[i]);
        }
        cout << MAX << endl;
    }
}