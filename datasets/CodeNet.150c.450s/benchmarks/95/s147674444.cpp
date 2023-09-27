#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <stack>
#include <numeric>
#include <algorithm>
#include <tuple>
#include <stdio.h>
#include <bitset>
#include <limits.h>
#include <complex>
#include <deque>
#include <iomanip>
#include <list>
#include <cstring>
using namespace std;
#define pi pair<int,int>
#define pl pair<long long,long long>
#define chmax(a,b) (a<b ? a=b:0)
#define chmin(a,b) (a>b ? a=b:0)
#define en cout << endl //セミコロンつけろ
//#define MM 1000000000
//#define MOD MM+7
typedef long long ll;
const int MM = 1e9;
const int MOD = MM+7;
const long double PI = acos(-1);
const long long INF = 1e15;
int dx[8] = {-1,0,1,0,-1,-1,1,1};
int dy[8] = {0,-1,0,1,-1,1,1,-1};
// 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122
template<typename T>
T GCD(T u,T v){
    return v ? GCD(v,u%v) : u;
}
template<typename T>
T LCM(T x,T y){
    T gc = GCD(x,y);
    return x*y/gc;
}
struct edge {
    ll to,cost;
};
/*
const int COM_MAX = 500500;
long long fac[COM_MAX],finv[COM_MAX],inv[COM_MAX];
void init(){
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for(int i = 2; i < COM_MAX; i++){
        fac[i] = fac[i-1]*i%MOD;
        inv[i] = MOD - inv[MOD%i]*(MOD/i)%MOD;
        finv[i] = finv[i-1]*inv[i]%MOD;
    }
}
long long COM(int n,int k){
    if(n < k || n < 0 || k < 0) return 0;
    return fac[n]*(finv[k]*finv[n-k]%MOD)%MOD;
}
*/
int main(){
    vector<int> ans(0);
    while(true){
        int N; cin >> N;
        if (N == 0) break;
        string s; 
        int res = 0;
        int now = 0; // 0なら床、1なら台上
        int left = 0,right = 0;
        for (int i = 0; i < N; i++){
            cin >> s;
            if (s == "lu"){
                left = 1;
            } else if (s == "ru"){
                right = 1;
            } else if (s == "ld"){
                left = 0;
            } else if (s == "rd"){
                right = 0;
            }

            if (right == left && right == 1 && now == 0){
                res++;
                now = 1;
            } else if (right == left && right == 0 && now == 1){
                res++;
                now = 0;
            }
        }
        ans.push_back(res);
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
}
