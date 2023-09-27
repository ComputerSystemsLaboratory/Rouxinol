#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

double x[3], y[3], xp, yp;

double cross(int a, int b){
    return x[a] * y[b] - y[a] * x[b];
}

signed main(){
    while(1){
        rep(i, 0, 3) cin >> x[i] >> y[i];
        cin >> xp >> yp;
        if(cin.eof()) break;        
        
        rep(i, 0, 3){
            x[i] -= xp;
            y[i] -= yp;
        }
        int cnt = 0;
        rep(i, 0, 3){
            if(cross(i, (i + 1) % 3) < 0) cnt++;
        }
        cout << (cnt % 3 == 0 ? "YES" : "NO") << endl;
    }
}