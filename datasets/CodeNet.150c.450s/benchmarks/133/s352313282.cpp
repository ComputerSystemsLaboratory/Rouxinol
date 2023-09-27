#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int64_t i = 0; i < (int64_t)(n); i++)

int main() {
    int d; cin >> d;
    int n = 26;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    vector<vector<int>> s(d,vector<int>(n));
    rep(i,d){
        rep(j,n){
            cin >> s[i][j];
        }
    }
    vector<int> t(d);
    rep(i,d){
        cin >> t[i];
        t[i]--;
    }

    vector<int> last(n,1);
    int64_t happy = 0;
    rep(i,d){
        rep(j,n){
            happy -= c[j]*last[j];
        }
        happy += c[t[i]]*last[t[i]]+s[i][t[i]];
        cout << happy << endl;

        last[t[i]] = 1;
        rep(j,n){
            if(j != t[i]) last[j]++;
        }
    }

}
