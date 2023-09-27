#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
#include <cstdio>
#include <tuple>
#include <string>
#include <vector> 
#include <set>
#include <string.h>
#include <map>
#include <cmath>
using Graph = vector<vector<int>>;
using Graph_Wei = vector<vector<pair<int,int>>>;
using ll = long long;
const long long INF = 1LL<<60; // 仮想的な無限大の値
vector<bool> seen;

Graph G;

int solve(ll a,ll b,ll c){

    for(int i=0;i < 1000;i++){

        if(a & 1) return i;
        if(b & 1) return i;
        if(c & 1) return i;

        ll ta,tb,tc;
        ta = (b + c)/2;
        tb = (a + c)/2;
        tc = (a + b)/2;

        a = ta;
        b = tb;
        c = tc;

    }
    return -1;
}


int main() {

    //累積和
    //区間kで長さを与えた時の累積わの最大値
    int n,k;
    

    while(cin >> n >> k){
        if(n ==0) break;
        vector<ll> a(n);
        for(int i=0;i < n;i++) cin >> a[i];

        //累積和作成
        vector<int> s(n+1,0);
        for(int i=0;i < n;i++) s[i + 1] = s[i] + a[i];

        ll res =-INF;
        ll val;

        for(int i=0;i + k <= n;i++ ){
            val = s[i + k] - s[i];
            if(res < val) res = val;
        }
        cout << res << endl;


    }
    


    return 0;

}
