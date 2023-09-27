#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b, c, x;
    while(1){
        cin >> n >> a >> b >> c >> x;
        if(n + a + b + c + x == 0) break;
        vector<int> y(n);
        rep(i, 0, n){
            cin >> y[i];
        } 
        int ans = 0;
        int idx = 0;
        for(int i = 0; i <= 10000; i++){
            if(x == y[idx]){
                idx++;
            }
            if(idx == n){
                cout << i << endl;
                break;
            }
            x = (a * x + b) % c;            
            if(i == 10000){
                cout << -1 << endl;
                break;
            }
        }
    }
}
