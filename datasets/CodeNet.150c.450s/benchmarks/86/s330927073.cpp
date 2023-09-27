#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef pair<int, int> P;

signed main(){
    int n, m, p;
    while(1){
        cin >> n >> m >> p;
        if(n + m + p == 0) break;
        m--;
        vector<int> x(n);
        int sum = 0;
        rep(i, 0, n){
            cin >> x[i];
            sum += x[i];
        }
        sum = sum * (100 - p);
        if(x[m] == 0) cout << 0 << endl;
        else cout << sum / x[m] << endl;
    }
}