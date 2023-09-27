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

const int MAX_ROW = 62;   // to be set appropriately
const int MAX_COL = 210;  // to be set appropriately
struct BitMatrix {
    int H, W;
    bitset<MAX_COL> val[MAX_ROW];
    BitMatrix(int m = 1, int n = 1) : H(m), W(n) {}
    inline bitset<MAX_COL> &operator[](int i) { return val[i]; }
};

int GaussJordan(BitMatrix &A, bool is_extended = false) {
    int rank = 0;
    for (int col = 0; col < A.W; ++col) {
        if (is_extended && col == A.W - 1) break;
        int pivot = -1;
        for (int row = rank; row < A.H; ++row) {
            if (A[row][col]) {
                pivot = row;
                break;
            }
        }
        if (pivot == -1) continue;
        swap(A[pivot], A[rank]);
        for (int row = 0; row < A.H; ++row) {
            if (row != rank && A[row][col]) A[row] ^= A[rank];
        }
        ++rank;
    }
    return rank;
}

int linear_equation(BitMatrix A, vector<int> b, vector<int> &res) {
    int m = A.H, n = A.W;
    BitMatrix M(m, n + 1);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) M[i][j] = A[i][j];
        M[i][n] = b[i];
    }
    int rank = GaussJordan(M, true);

    // check if it has no solution
    for (int row = rank; row < m; ++row)
        if (M[row][n]) return -1;

    // answer
    res.assign(n, 0);
    for (int i = 0; i < rank; ++i) res[i] = M[i][n];
    return rank;
}

void solve() {
    int Q;
    cin >> Q;
    Vl A;
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
        BitMatrix mat(62, 210);
        Vi b(62), vec;
        for (ll i = 0; i < N; i++) {
            if (S[i] == '0') {
                for (ll j = 0; j < 62; j++) {
                    mat[j][i] = (A[i] & (1ll << j)) ? 1 : 0;
                }
            }
            else {
                for (ll j = 0; j < 62; j++) {
                    b[j] = (A[i] & (1ll << j)) ? 1 : 0;
                }
                ll res = linear_equation(mat, b, vec);
                if (res == -1) {
                    is_zero = false;
                    break;
                }
            }
        }

        if (is_zero) {
            cout << 0 << "\n";
        }
        else {
            cout << 1 << "\n";
        }
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