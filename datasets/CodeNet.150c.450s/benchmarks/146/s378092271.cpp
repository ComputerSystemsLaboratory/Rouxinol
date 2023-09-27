// J4180449 三宅亮輔
// 問題名
// - Parallelism
// 問題URL
// - https://onlinejudge.u-aizu.ac.jp/#/problems/0021
// 所要時間
// - 45分
// 学んだこと
//
//
//

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<double, double> P;

int n;

vector<P> p;

const double eps = 1e-10;

void solve() {
    P a1, a2, a3, a4;
    cin >> a1.first >> a1.second >> a2.first >> a2.second >> a3.first >>
        a3.second >> a4.first >> a4.second;
    P b1 = P(a2.first - a1.first, a2.second - a1.second);
    P b2 = P(a4.first - a3.first, a4.second - a3.second);
    if(abs(b1.second) < eps || abs(b2.second) < eps) {
        if(abs(b1.second - b2.second) < eps)
            puts("YES");
        else
            puts("NO");
    } else if(abs((b1.first / b1.second) - (b2.first / b2.second)) < eps) {
        puts("YES");
    } else {
        puts("NO");
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}

