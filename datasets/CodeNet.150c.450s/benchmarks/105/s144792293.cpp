#include <bits/stdc++.h>
#define FASTIO
using namespace std;

using ll = long long;
using Vi = vector<int>;
using Vl = vector<ll>;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

constexpr int I_INF = numeric_limits<int>::max();
constexpr ll L_INF = numeric_limits<ll>::max();

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void solve() {
    int Q;
    cin >> Q;
    Vl A;
    Vl basis;
    while (Q--) {
        ll N;
        cin >> N;
        A.resize(N);
        for (ll i = 0; i < N; i++) {
            cin >> A[i];
        }
        string S;
        cin >> S;
        reverse(A.begin(), A.end());
        reverse(S.begin(), S.end());

        bool is_zero = true;

        basis.clear();
        for (ll i = 0; i < N; i++) {
            if (S[i] == '0') {
                ll a = A[i];
                for (const auto& w : basis) {
                    if (w & (-w) & a) {
                        a ^= w;
                    }
                }
                if (a) basis.emplace_back(a);
            }
            else {
                ll a = A[i];
                for (const auto& w : basis) {
                    if (w & (-w) & a) {
                        a ^= w;
                    }
                }
                if (a) {
                    is_zero = false;
                    break;
                }
            }
        }

        if (is_zero)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
}

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

int main() {
#ifdef FASTIO
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(false);
#endif
#ifdef FILEINPUT
    ifstream ifs("./in_out/input.txt");
    cin.rdbuf(ifs.rdbuf());
#endif
#ifdef FILEOUTPUT
    ofstream ofs("./in_out/output.txt");
    cout.rdbuf(ofs.rdbuf());
#endif
    solve();
    cout << flush;
    return 0;
}