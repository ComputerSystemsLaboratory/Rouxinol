#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<string>
#include<iomanip>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
int n, m;

void calc() {
    vector<pair<int, int> > v(n);
    ll sum = 0;
    rep(i, n) {
        cin >> v[i].first >> v[i].second;
        sum += v[i].first * v[i].second;
    }
    sort(v.begin(), v.end(), [](auto &left, auto &right){return left.second > right.second;});
    //rep(i, n) cout << v[i].first << " " << v[i].second << endl;
    rep(i, n) {
        sum -= min(m, v[i].first) * v[i].second;
        m -= min(v[i].first, m);
        if (m == 0) break;
    }
    cout << sum << endl;
}
int main() {
    while (cin >> n >> m && !(n == 0 && m == 0)) calc();
}


