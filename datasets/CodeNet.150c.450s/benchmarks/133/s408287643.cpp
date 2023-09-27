#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)



int main() {
    int d;
    cin >> d;
    
    vector<int> c(26);
    rep(i,26) {
        cin >> c[i];
    }
    
    vector<vector<int>> s(d, vector<int>(26));
    rep(i,d) {
        rep(j,26) {
            cin >> s[i][j];
        }
    }
    
    vector<int> t(d);
    rep(i,d) {
        cin >> t[i];
    }
    
    vector<int> last(26);
    
    // 計算する
    int v = 0;
    rep(i,d) {
        v += s[i][t[i]-1];
        //cout << v << endl;
        
        last[t[i]-1] = i+1;
        rep(j,26) {
            v -= c[j] * (i+1 - last[j]);
        }
        
        cout << v << endl;
    }
    
    
    return 0;
}
