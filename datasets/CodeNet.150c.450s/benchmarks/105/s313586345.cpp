#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
using P = pair<lint, lint>;
#define FOR(i, begin, end) for(int i=(begin),i##_end_=(end);i<i##_end_;i++)
#define IFOR(i, begin, end) for(int i=(end)-1,i##_begin_=(begin);i>=i##_begin_;i--)
#define REP(i, n) FOR(i,0,n)
#define IREP(i, n) IFOR(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
constexpr int MOD = 1000000007;
constexpr int INF = 2147483647;
void yes(bool expr) {
  cout << (expr ? 0 : 1) << "\n";
}
int gauss_jordan(vector<vector<int>> &A) {
    int m = A.size(), n = A[0].size();
    int rank = 0;
    for (int col = 0; col < n; ++col) {
        // ピボットを探す
        int pivot = -1;
        int ma = 0;
        for (int row = rank; row < m; ++row) {
            if (abs(A[row][col]) > ma) {
                ma = abs(A[row][col]);
                pivot = row;
            }
        }
        // ピボットがなかったら次の列へ
        if (pivot == -1) continue;

        // まずは行を swap
        swap(A[pivot], A[rank]);

        // ピボットの値を 1 にする
        //auto fac = A[rank][col];
        //for (int col2 = 0; col2 < n; ++col2) A[rank][col2] /= fac;

        // ピボットのある列の値がすべて 0 になるように掃き出す
        for (int row = 0; row < m; ++row) {
            if (row != rank && abs(A[row][col]) > 0) {
                for (int col2 = 0; col2 < n; ++col2) {
                    A[row][col2] = A[row][col2] ^ (A[rank][col2]);
                }
            }
        }
        ++rank;
    }
    for (int row = 0; row < m; ++row) {
        for(int row2 = row+1; row2<m; ++row2) {
            REP(k, n) {
                if(A[row2][k] == 1) {
                    if(A[row][k] == 1) {
                        for (int col2 = 0; col2 < n; ++col2) {
                            A[row][col2] = A[row][col2] ^ (A[row2][col2]);
                        }
                    }
                    break;
                } 
            }
        }
    }
    return rank;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    REP(t, T) {
        int N;
        cin >> N;
        vector<lint> A(N);
        REP(i, N) cin >> A[i];
        string S;
        cin >> S;
        set<lint, greater<lint>> st;
        bool flg = true;
        IREP(i, N) {
            for(lint x : st) A[i] = min(A[i], A[i]^x);
            if(S[i] == '0') {
                if(A[i] > 0) st.insert(A[i]);
            } else {
                if(A[i] > 0) {
                    flg = false;
                    break;
                }
            }
        }
        yes(flg);  
    }
}