#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, n) for(int i=(a); i<(n); i++)
#define rep(i, n) REP(i, 0, n)

int main(){
    int n,m;
    vector< pair<int, int> > v;
    while(cin>>n>>m, n+m) {
        v.clear();
        rep(_, n) {int d, p; cin >> d >> p; v.push_back({p, d});}
        sort(v.begin(), v.end(), greater< pair<int, int> >());
        int ans = 0;
        rep(i, n) ans += v[i].first * v[i].second;
        rep(i, n) {
            if (m > v[i].second) {
                m -= v[i].second;
                ans -= v[i].first * v[i].second;
            } else {
                ans -= m * v[i].first;
                break;
            }
        }
        cout << ans << endl;
    }
}
/*
2 8 5 6 4 5 0 0
 */
