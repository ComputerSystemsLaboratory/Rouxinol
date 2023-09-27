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
constexpr double EPS = 1e-8;
int GaussJordan(vector<vector<int>> &A, bool is_extended = false) {
    int m = A.size(), n = A[0].size();
    int rank = 0;
    for (int col = 0; col < n; ++col) {
        if (is_extended && col == n-1) break;
        int pivot = -1;
        int ma = EPS;
        for (int row = rank; row < m; ++row) {
            if (abs(A[row][col]) > ma) {
                ma = abs(A[row][col]);
                pivot = row;
            }
        }
        if (pivot == -1) continue;
        swap(A[pivot], A[rank]);
        for (int row = 0; row < m; ++row) {
            if (row != rank && abs(A[row][col]) > EPS) {
                for (int col2 = 0; col2 < n; ++col2) {
                    A[row][col2] ^= A[rank][col2];
                }
            }
        }
        rank++;
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
        vector<vector<int>> X;
        bool flg = true;
        int rank = 0;
        IREP(i, N) {
            vector<int> tmp(60);
            REP(k, 60) if((A[i]>>k&1)==1) tmp[k] = 1;
            X.push_back(tmp);
            int rank2 = GaussJordan(X);
            //cout << i << " " << rank2 << "\n";
            if(rank2 > rank && S[i] == '1') {
                flg = false;
                break;
            }   
            rank = rank2; 
        }
        yes(flg);  
    }
}