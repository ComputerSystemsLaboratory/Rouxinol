#include<iostream>
#include<stdio.h>
//#include <bits/stdc++.h>
#include<vector>
#include<float.h>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cstring>
#include<math.h>
#include<cmath>
#include<sstream>
#include<set>
#include<map>
#include<queue>
#include <cassert>
#include <cmath>
#include<cstdint>

#define INF 1e9
#define rep(i,n)for(int i=0;(i)<(int)(n);i++)
#define REP(i,a,b)for(int i=(int)(a);(i)<=(int)(b);i++)
#define VEC(type, c, n) std::vector<type> c(n);for(auto& i:c)std::cin>>i;
#define vec(type,n) vector<type>(n)
#define vvec(m,n) vector<vector<int>> (int(m),vector<int>(n))
#define ALL(a)  (a).begin(),(a).end()
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)


using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<ll, ll>;

int N;
vector<P> p(105);
ll dp[105][105];
queue<P> que;
ll rec(int l = 0, int r = N){
    if(r - l <= 1)return 0;
    if(r - l == 2){
        return p[l].first * p[l].second * p[r-1].second;
    }
    ll &ret = dp[l][r];
    if(ret != INF)return ret;
    for(int i = l + 1; i <= r - 1; i++){
        ll rr = rec(l, i) + rec(i, r) + (p[l].first * p[i].first * p[r-1].second);
      que.push(P(i, rr));
        chmin(ret, rr);
    }
    return ret;
}

int main(){
    cin >> N;
    rep(i, N){
        ll a, b;
        cin >> a >> b;
        p[i] = P(a, b);
    }
    rep(i, 105)rep(j, 105)dp[i][j] = INF;
    ll res = rec();

  //cout << p[1].first << " " << p[1].second << " " << p[2].second << endl;
    cout << res << endl;
}
