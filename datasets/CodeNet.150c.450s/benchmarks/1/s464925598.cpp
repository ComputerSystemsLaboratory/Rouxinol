#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<cmath>
#include<iomanip>
#include<set>
#include<string>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int inf = 1e9 + 7;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    rep(i, n) v[i] = inf;
    rep(i, n) {
        int a; cin >> a;
        v[lower_bound(v.begin(), v.end(), a) - v.begin()] = a;
    }
    int cnt = 0;
    rep(i, n) if (v[i] != 1e9 + 7) cnt++; else break;
    cout << cnt << endl;
}

