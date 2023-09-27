#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <string>
#include <sstream>
#include <algorithm>
#include <random>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <cassert>
#include <climits>
#include <bitset>
#include <functional>
#include <iomanip>
#include <random>

#define FOR_LT(i, beg, end) for (int i = (int)(beg); i < (int)(end); i++)
#define FOR_LE(i, beg, end) for (int i = (int)(beg); i <= (int)(end); i++)
#define FOR_DW(i, beg, end) for (int i = (int)(beg); (int)(end) <= i; i--)
#define REP(n)              for (int repeat_index = 0; repeat_index < (int)n; repeat_index++)


using namespace std;
const int MAX_ROW = 401; // to be set appropriately
const int MAX_COL = 401; // to be set appropriately
struct BitMatrix {
    int H, W;
    bitset<MAX_COL> val[MAX_ROW];
    BitMatrix(int m = 1, int n = 1) : H(m), W(n) {}
    inline bitset<MAX_COL>& operator [] (int i) { return val[i]; }

    void print() {
        FOR_LT(i, 0, H) {
            FOR_LT(j, 0, W) {
                cout << val[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int GaussJordan(BitMatrix & A, bool is_extended = false) {
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

int linear_equation(BitMatrix A, vector<int> b, vector<int> & res) {
    int m = A.H, n = A.W;
    BitMatrix M(m, n + 1);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) M[i][j] = A[i][j];
        M[i][n] = b[i];
    }
    //M.print();
    int rank = GaussJordan(M, true);
    //cout << rank << endl;

    // check if it has no solution
    for (int row = rank; row < m; ++row) if (M[row][n]) return -1;

    // answer
    res.assign(n, 0);
    for (int i = 0; i < rank; ++i) res[i] = M[i][n];
    return rank;
}

void solve()
{
    int n; cin >> n;
    vector<uint64_t> as(n);
    FOR_LT(i, 0, n) cin >> as[i];

    string s; cin >> s;
    int num0 = 0;
    FOR_LT(i, 0, n) {
        if (s[i] == '0') num0++;
    }

    BitMatrix M(64, num0);
    {
        int idx = 0;
        FOR_DW(i, n - 1, 0) {
            if (s[i] == '0') {
                uint64_t a = as[i];
                FOR_LT(j, 0, 64) {
                    if (a & ((uint64_t)1 << j)) {
                        M[j][idx] = 1;
                    }
                }
                idx++;
            }
        }
    }

    FOR_LT(i, 0, n) {
        //cout << i << " " << s[i] << " " << M.H << endl;
        if (s[i] == '1') {
            if (M.W == 0) {
                cout << 1 << endl;
                return;
            }
            vector<int> b(64);
            uint64_t a = as[i];
            FOR_LT(j, 0, 64) {
                if (a & ((uint64_t)1 << j)) {
                    b[j] = 1;
                }
            }

            vector<int> res;
            linear_equation(M, b, res);
            if (res.empty()) {
                cout << 1 << endl;
                return;
            }
        }
        else {
            M.W--;
        }
    }

    cout << 0 << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(20);

    int testcases; cin >> testcases;
    REP(testcases) {
        solve();
    }

	return 0;
}