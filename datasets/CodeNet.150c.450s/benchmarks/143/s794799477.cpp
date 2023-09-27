#include <bits/stdc++.h>
#include <math.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rrep(i, n) for(int i = (n-1); i >= 0; i--)
using namespace std;
typedef long long ll;
const int MOD = 1000000007;
const ll INF = 1LL<<60;
const int IINF = 1000000000;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using Graph = vector<vector<int>>;


int main(){
    int N; cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];

    int Q; cin >> Q;
    vector<int> B(Q), C(Q);
    rep(i,Q) cin >> B[i] >> C[i];

    map<int, ll> counter;
    ll total = 0;
    rep(i,N){
        counter[A[i]]++;
        total += A[i];
    }

    rep(i,Q){
        ll b_count = counter[B[i]];
        counter[B[i]] = 0;
        counter[C[i]] += b_count;
        total -= b_count*B[i];
        total += b_count*C[i];

        cout << total << endl;
    }
} 