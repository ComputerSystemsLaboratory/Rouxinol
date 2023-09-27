#include <bits/stdc++.h>
#define rep(i, start, end) for (long long i = start; i < end; ++i)
#define srt(x) sort((x).begin(), (x).end());
#define rsrt(x) sort((x).rbegin(), (x).rend());
#define deb(x) cout<<#x<<" = "<<(x)<<" (L"<<LINE<<")"<<endl;
#define vdeb(x) {cout<<#x<<" = { "; rep(i, x.size()) cout<<x[i]<<' '; cout <<'}'<<" (L"<<LINE<<")"<<endl;}
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vivi = vector<vi>;
using vll = vector<long long>;
using vllvll = vector<vll>;
using vs = vector<string>;
using um = unordered_map<long long, long long>;
const long long INF = 1LL << 60;
const long long MOD = 1e9 + 7;

int main()
{
    ll V, E;
    cin >> V >> E;
    vllvll M(V, vll(V, INF));
    ll s, t, d;
    rep(i, 0, E) {
        cin >> s >> t >> d;        
        M[s][t] = d;
    }

    rep(i, 0, V) {
        M[i][i] = 0;
    }
    rep(k, 0, V) {
        rep(i, 0, V) {
            rep(j, 0, V) {
                M[i][j] = min(M[i][j], M[i][k] + M[k][j]);
            }
        }
    }

    rep(i, 0, V) {
        if(M[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    rep(i, 0, V) {
        rep(j, 0, V) {
            if (M[i][j] >= 1LL<<59)
                cout << "INF";
            else
                cout << M[i][j];
            if (j != V - 1)
                cout << ' ';
        }
        cout << endl;
    }
}
