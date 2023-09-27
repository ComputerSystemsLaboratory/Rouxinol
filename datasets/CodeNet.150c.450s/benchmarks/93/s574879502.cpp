//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using ld = long double;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;
const int INF = 100010001;
const ll LINF = (ll)INF*INF*10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<P> a(n);
    unordered_map<int, vector<char> > ch;
    rep(i, n) {
        char c;
        cin >> c >> a[i].first;
        a[i].second = ch[a[i].first].size();
        ch[a[i].first].push_back(c);
    }

    auto partition = [&](int p, int r) {
        int x = a[r].first;
        int i = p-1;
        for(int j = p; j < r; ++j) {
            if(a[j].first <= x) {
                swap(a[j], a[++i]);
            }
        }
        swap(a[++i], a[r]);
        return i;
    };
    function<void(int, int)> quickSort = [&](int p, int r) {
        if(p < r) {
            int q = partition(p, r);
            quickSort(p, q-1);
            quickSort(q+1, r);
        }
    };

    quickSort(0, n-1);

    vector<pair<char, int> > ans(n);
    unordered_map<int, int> cou(n);
    bool x = true;
    rep(i, n) {
        ans[i].first = ch[a[i].first][a[i].second];
        ans[i].second = a[i].first;
        if(cou[a[i].first]++ != a[i].second) x = false;
    }
    cout << (x?"Stable":"Not stable") << '\n';
    rep(i, n) {
        cout << ans[i].first << ' ' << ans[i].second << '\n';
    }
}
