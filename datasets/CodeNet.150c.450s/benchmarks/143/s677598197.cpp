#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < (n); i++)
#define RREP(i, s, n) for (int i = s; i < (n); i++)
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin(), a.rend()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
using ll = long long;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
const ll MOD = 1000000007;
const ll INF = MOD * MOD;
const int inf = (1<<29);

int main() {

    int N;
    cin >> N;
    vector<int> A(N);
    ll res = 0;
    REP(i, N) {
        cin >> A[i];
        res += A[i];
    }
    int Q;
    cin >> Q;
    vector<int> B(Q), C(Q);
    REP(i, Q) cin >> B[i] >> C[i];

    vector<ll> num(100001, 0);
    for(int i = 0; i < N; i++) {
        num[A[i]]++;
    }

    for(int i = 0; i < Q; i++) {
        res += num[B[i]] * (C[i] - B[i]);
        num[C[i]] += num[B[i]];
        num[B[i]] = 0;
        cout << res << endl;
    }





    // ll res = 0;
    // for(int i = 0; i < N; i++) {
    //     res += A[i];
    // }
    
    // for(int i = 0; i < Q; i++) {
    //     for(int j = 0; j < N; j++) {
    //         if (A[j] == B[i]) {
    //             A[j] = C[i];
    //             res += C[i] - B[i];
    //         }
    //     }
    //     cout << res << endl;
    // }

    return 0;
}