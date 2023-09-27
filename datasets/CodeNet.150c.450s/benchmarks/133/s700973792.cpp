#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define CONTEST_CNT 26

const ll mod = 1000000007;

int main() {
    int d; cin >> d;
    vector<int> cs(CONTEST_CNT);
    vector<vector<int>> ss(d, vector<int>(CONTEST_CNT));
    vector<int> ts(d);
    vector<int> lastd(CONTEST_CNT, -1);
    rep(i,CONTEST_CNT) cin >> cs.at(i);
    rep(i,d){
        rep(j,CONTEST_CNT){
            cin >> ss.at(i).at(j); 
        }
    }
    rep(i,d) cin >> ts.at(i);
    ll r = 0;
    rep(i,d){
        r += ss.at(i).at(ts.at(i) - 1);
        lastd.at(ts.at(i) - 1) = i;
        rep(j,CONTEST_CNT){
            r -= cs.at(j) * (i - lastd.at(j));
        }
        cout << r << endl;
    }
    return 0;
}