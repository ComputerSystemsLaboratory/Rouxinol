#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
#define REP(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(a)  (a).begin(),(a).end()
#define endl "\n"

template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    REP(i,n) cin >> v[i];

    auto partition = [&] (int p,int r) {
        auto x = v[r];
        auto i = p-1;
        FOR(j,p,r) {
            if (v[j] <= x) {
                i++;
                iter_swap(v.begin()+i,v.begin()+j);
            }
        }
        iter_swap(v.begin()+i+1,v.begin()+r);
        return i+1;
    };

    auto i = partition(0,n-1);


    REP(j,n) {
        if (j != 0) cout << " ";
        if (i == j)cout << "[";
        cout << v[j];
        if (i == j)cout << "]";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
