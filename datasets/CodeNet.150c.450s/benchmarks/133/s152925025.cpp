#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, a, b) for(int i = a; i < b; i++)
#define  all(x) (x).begin(),(x).end()     // 昇順ソート
#define  rall(v) (v).rbegin(), (v).rend() // 降順ソート
#define  FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;
typedef long long int lli;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return true; } return false; }

int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

const int n = 26;

int main(){
    int days;
    cin >> days;

    vector<int> bad(n);
    rep(i, n) cin >> bad[i];
    vector<vector<int>> score(days, vector<int>(n));

    rep(i, days){
        rep(j, n) cin >> score[i][j];
    }

    vector<int> holdCons(days);
    rep(d,days) {
        cin >> holdCons[d];
        holdCons[d]--;
    }

    vector<int> last(n, 0);

    vector<ll> ans(days, 0);
    rep(d,days){
        int con = holdCons[d];
        ll sat = score[d][con];      
        rep(i, n){
            if (i == con){
                last[i] = 0;
                continue;
            }
            last[i]++;
            sat -= bad[i] * last[i];
        }
        if (d == 0) ans[d] = sat;
        else ans[d] = sat + ans[d-1];
    }
    rep(d, days) cout << ans[d] << endl;
}