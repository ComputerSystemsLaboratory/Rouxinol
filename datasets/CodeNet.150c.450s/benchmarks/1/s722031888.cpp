#pragma GCC optimize("O3")
#pragma GCC target("avx")
#include <bits/stdc++.h>
#define rep(i ,n) for(int i=0;i<(int)(n);++i)
#define repr(i ,n) for(int i=n;i>(int)(n);--i)
#define rep1(i ,n) for(int i=1;i<=(int)(n);++i)
#define ALL(a) a.begin(), a.end()
#define RSORT(a) sort(ALL(a),greater<>())
#define SORT(a) sort(ALL(a))
#define bit_check(bit, i) ((bit>>(i)) & 1)
#define PRINT(x) printf("%d\n",(x));
#define ENDL printf("\n");
using namespace std;
typedef long long int i64;
typedef unsigned long long u64;
template<class T> using V = vector<T>;
using I = int;
using VI = V<I>;
const int INF = 2e9;
const i64 MOD = 1e9 + 7;

template <class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template <class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

VI a;
VI dp;

int binary_search(VI a ,int key){ //time limit ecxeeded
    int left = 0;
    int right = a.size()-1;
    int middle;
    while(left <= right){
        middle = ( left + right ) / 2;
        if( key == a[middle]) return middle;
        else if ( key < a[middle]) right = middle - 1;
        else left = middle + 1;
    }
    return left;
}

signed main(){
    int n;cin >> n;
    a.resize(n);
    dp.resize(n,INF);
    rep(i ,n) cin >> a[i];
    dp[0] = a[0];
    for(int i = 1 ; i < n ; ++i){
        *lower_bound(ALL(dp) , a[i]) = a[i];
    }
    int ans = 0;
    rep(i , n){
        if(dp[i] != INF) ++ans;
        else break;
    }
    PRINT(ans);
}
