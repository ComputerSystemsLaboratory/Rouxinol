#include <cmath>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <iomanip>

#define int long long int
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int INF = 1e15;
const int MOD = 1e9+7;

void solve(int n, int m){
    vector<int> h(n), w(m);
    rep(i, n) cin >> h[i];
    rep(i, m) cin >> w[i];

    vector<int> hh, ww;
    rep(i, n){
        int len = 0;
        for(int j = i; j < n; j++){
            len += h[j];
            hh.push_back(len);
        }
    }
    rep(i, m){
        int len = 0;
        for(int j = i; j < m; j++){
            len += w[j];
            ww.push_back(len);
        }
    }

    map<int, int> mh, mw;
    rep(i, (int)hh.size()){
        if(mh.find(hh[i]) == mh.end()){
            mh.emplace(hh[i], 0);
        }
        mh[hh[i]]++;
    }
    rep(i, (int)ww.size()){
        if(mw.find(ww[i]) == mw.end()){
            mw.emplace(ww[i], 0);
        }
        mw[ww[i]]++;
    }

    int ans = 0;
    vector<P> H, W;
    for(auto it = mh.begin(); it != mh.end(); it++){
        int x = (*it).first;
        int c = (*it).second;

        if(mw.find(x) != mw.end()){
            ans += c * mw[x];
        }
    }
    cout << ans << endl;
}

signed main(){
    while(true){
        int n, m;
        cin >> n >> m;

        if(n == 0 && m == 0){
            break;
        }
        solve(n, m);
    }

    return 0;
}

