#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define Sort(Array) sort(Array.begin(), Array.end())
#define Reverse(a) reverse(a.begin(), a.end())
#define out(ans) cout << ans << endl;
const int MOD = 1000000007;
const int INF = 2147483647;

//------------↓------------- M -------------- E ---------------- M --------------- O ---------------↓--------------//
// コンパイル 
// g++ -std=c++1z
//
// -------型変換--------
// int を string に変換
// string s = to_string(n);
// string を int に変換
// int n = stoi(s);
//
// -------二分探索---------
// k以上の値が最初に現れる時のイテレータ O(logN)
// lower_bound(data.begin(), data.end(), k)
// kより大きい値が最初の現れる時のイテレータ O(logN)
// upper_bound(data.begin(), data.end(), k)
// kがdataに存在するかをtrue or falseで返す O(logN)
// binary_search(data.begin(), data.end(), k)
// 
//
//
//
//
//
// 
//------------↑------------- M -------------- E ---------------- M --------------- O ---------------↑--------------//

ll modadd(ll a, ll b){return (a%MOD+b%MOD+MOD)%MOD;}
ll modmul(ll a, ll b){return a%MOD*b%MOD%MOD;}
ll modexp(ll a, ll n){if (a==0) return 0; if(n==0)return 1; if(n%2==0){ll e=modexp(a,n/2); return modmul(e,e);} return modexp(a,n-1)*a%MOD;}
ll modinv(ll n){return modexp(n%MOD,MOD-2);}
ll modfact(ll n){ll res=1; for (int i=1; i <= n; ++i){res *= i; res %= MOD;} return res;}
ll modncr(ll n, ll r){ll numer=1;ll denom=1;for(int i=1;i<=r;++i){numer=modmul(numer,n-r+i);denom=modmul(denom,i);}return modmul(numer, modinv(denom));}




int main() {

    int m, n; cin >> m >> n;

    out(modexp(m,n));

    return 0;
}









