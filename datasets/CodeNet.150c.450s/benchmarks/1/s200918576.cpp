/*
    Problem 53
    https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D
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
/* main */
int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    vector<int> lis(N+1, INF);
    for (int i = 0; i < N; i++) {
        *lower_bound(lis.begin(), lis.end(), a[i]) = a[i];
    }
    cout << lower_bound(lis.begin(), lis.end(), INF) - lis.begin() << '\n';
}
