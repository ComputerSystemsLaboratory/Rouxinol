#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> solve(ll D, ll M, vector<ll>& C, vector<vector<ll>>& S, vector<int>& T) {
    vector<ll> V(D), L(M);
    ll v = 0;
    for ( int d = 0; d < D; d++ ) {
        int t = T[d];
        v += S[d][t];
        for ( int i = 0; i < M; i++ ) {
            if ( i != t ) {
                L[i] += C[i];
            } else {
                L[i] = 0;
            }
            v -= L[i];
        }
        V[d] = v;
    }
    return V;
}

int main() {
    ll D, M = 26;
    cin >> D;
    vector<ll> C(M);
    for ( int i = 0; i < M; i++ ) {
        cin >> C[i];
    }
    vector<vector<ll>> S(D, vector<ll>(M));
    for ( int i = 0; i < D; i++ ) {
        for ( int j = 0; j < M; j++ ) {
            cin >> S[i][j];
        }
    }
    vector<int> T(D);
    for ( int i = 0; i < D; i++ ) {
        cin >> T[i];
        T[i]--;
    }
    vector<ll> V = solve(D, M, C, S, T);
    for ( int i = 0; i < D; i++ ) {
        cout << V[i] << "\n";
    }
    return 0;
}