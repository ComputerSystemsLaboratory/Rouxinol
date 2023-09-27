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
    int n, m;
    while(1){
        cin >> n >> m;
        int s = 0, t = 0;
        if(n + m == 0) break;
        int a[110] = {}, b[110] = {};
        rep(i, 0, n){
            cin >> a[i];
            s += a[i];
        }
        rep(i, 0, m){
            cin >> b[i];
            t += b[i];
        }
        int p = -1, q = -1;
        rep(i, 0, n){
            rep(j, 0, m){
                if(s - a[i] + b[j] == t + a[i] - b[j]){
                    if(p == -1){
                        p = a[i]; q = b[j];
                    }else if(p + q > a[i] + b[j]){
                        p = a[i]; q = b[j];
                    }
                }
            }
        }
        if(p == -1) cout << -1 << endl;
        else cout << p << " " << q << endl;
    } 
}