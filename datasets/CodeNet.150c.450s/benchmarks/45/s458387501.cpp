/*
    Problem 70
    https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_B
*/
#include <bits/stdc++.h>
using namespace std;
/* typedef */
typedef long long ll;
typedef pair<int, int> pii;
/* constant */
const int INF = 1 << 30;
const ll LINF = 1LL << 50;
const int NIL = -1;
const int MAX = 10000;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
/* function */
ll p(ll m, ll n) {
    if (n == 0) return 1;
    ll ret = p(m, n/2) % mod;
    ret = (ret * ret) % mod;
    if (n % 2) ret = (ret * m) % mod;
    return ret;
}
/* main */
int main(){
    ll m, n;
    cin >> m >> n;
    cout << p(m, n) << '\n';
}
