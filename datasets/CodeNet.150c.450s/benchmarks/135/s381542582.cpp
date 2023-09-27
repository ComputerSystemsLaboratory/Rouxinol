#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

const i64 MOD = 1000003;
const i64 INF = i64(1e18) + 7;


template <typename T>
bool chmin(T& x, T y){
    if(x > y){
        x = y;
        return true;
    }
    return false;
}

template <typename T>
bool chmax(T& x, T y){
    if(x < y){
        x = y;
        return true;
    }
    return false;
}


bool solve(){
    int h, w;
    cin >> h >> w;
    if(h == 0)
        return false;
    vector<int> a{0};
    vector<int> b{0};
    int p = 0;
    for(int i = 0; i < h; ++i){
        int x;
        cin >> x;
        p += x;
        a.push_back(p);
    }
    p = 0;
    for(int j = 0; j < w; ++j){
        int x;
        cin >> x;
        p += x;
        b.push_back(p);
    }

    map<int,int> m1, m2;
    vector<int> c, d;
    for(int i = 0; i < h; ++i)
        for(int j = i + 1; j <= h; ++j)
            ++m1[a[j] - a[i]];
    for(int i = 0; i < w; ++i)
        for(int j = i + 1; j <= w; ++j)
            ++m2[b[j] - b[i]];

    i64 ans = 0;
    for(auto& p : m1){
        ans += p.second * m2[p.first];
    }
    cout << ans << endl;
    return true;
}


signed main(){
    while(solve());
}
