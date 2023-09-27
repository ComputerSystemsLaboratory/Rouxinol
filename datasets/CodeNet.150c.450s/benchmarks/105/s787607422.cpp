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
    vector<Vi> mat;
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

        constexpr ll mx_d = 61;

        mat.assign(mx_d, Vi(202));

        bool is_zero = true;

        for (ll i = 0; i < N; i++) {
            if (S[i] == '0') {
                for (ll j = 0; j < mx_d; j++) {
                    mat[j][i] = (bool)(A[i] & (1ll << j));
                }
            }
            else {
                constexpr ll bk = 201;

                for (ll j = 0; j < mx_d; j++) {
                    mat[j][bk] = (bool)(A[i] & (1ll << j));
                }

                auto mat_cpy = mat;

                int rank = 0;
                for (ll col = 0; col < bk; col++) {
                    int pivot = -1;
                    for (ll row = rank; row < mx_d; ++row) {
                        if (mat[row][col]) {
                            pivot = row;
                            break;
                        }
                    }

                    if (pivot == -1) continue;
                    swap(mat[pivot], mat[rank]);
                    for (ll row = 0; row < mx_d; ++row) {
                        if (row != rank && mat[row][col]) {
                            for (ll c = 0; c <= bk; c++) {
                                mat[row][c] ^= mat[rank][c];
                            }
                        }
                    }
                    ++rank;
                }

                for (ll row = rank; row < mx_d; ++row) {
                    if (mat[row][bk]) {
                        is_zero = false;
                        break;
                    }
                }

                if (!is_zero) {
                    break;
                }

                mat = mat_cpy;
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