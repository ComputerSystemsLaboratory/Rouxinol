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
    #include<cassert>
    #include<cmath>
    #include<cstdint>
    #include<numeric>
    #include<array>
     
    #define INF 1e9
    #define rep(i,n)for(int i=0;(i)<(int)(n);i++)
    #define REP(i,a,b)for(int i=(int)(a);(i)<=(int)(b);i++)
    #define VEC(type, c, n) std::vector<type> c(n);for(auto& i:c)std::cin>>i;
    #define vec(type,n) vector<type>(n)
    #define vvec(m,n) vector<vector<int>> (int(m),vector<int>(n))
    #define ALL(a)  (a).begin(),(a).end()
    #define chmin(a, b) a = min(a, b)
    #define chmax(a, b) a = max(a, b)
    #define Vl vector<ll>
     
    using namespace std;
    using ll = long long;
    using Graph = vector<vector<ll>>;
    using P = pair<ll, ll>;
     
const ll MOD = 1e9 + 7;
const ll ZER = 0;

int main(){
    int n;
    cin >> n;
    map<ll, ll> mp;
    ll sum = 0;
    rep(i, n){
        ll a;
        cin >> a;
        mp[a]++;
        sum += a;
    }
    ll Q;
    cin >> Q;
    while(Q--){
        ll b, c;
        cin >> b >> c;
        ll tmp = sum;
        tmp -= (b * mp[b]);
        tmp += (c * mp[b]);
        mp[c] += mp[b];
        mp[b] = 0;
        cout << tmp << endl;
      sum = tmp;
    }
}