#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve_1(ll N, vector<ll> A, string S) {
    reverse(S.begin(), S.end());
    reverse(A.begin(), A.end());

    vector<bool> used(N,false);
    for ( int b = 62; b >= 0; b-- ) {
        ll bb = 1LL << b;
        for ( int i = 0; i < N; i++ ) {
            if ( S[i] == '0' && !used[i] && ((A[i] & bb) != 0))  {
                used[i] = true;
                for ( int j = 0; j < N; j++ ) {
                    if ( j == i ) continue;
                    if ( A[j] & bb ) {
                        A[j] ^= A[i];
                    }
                }
            } else {
                if ( S[i] == '1' && ((A[i] & bb) != 0) ) return 1;
            }
        }
    }
    return 0;
}

// int solve_2(ll N, vector<ll> A, string S) {
//     reverse(S.begin(), S.end());
//     unordered_set<ll> s;
//     s.insert(0);
//     for ( int i = 0; i < N; i++ ) {
        
//     }



// }

void test() {
    mt19937_64 mt64(0);
    uniform_int_distribution<ll> rnd(1, 15);
    ll x = rnd(mt64);



}


int main() {
    stringstream ssr;
    int T;
    cin >> T;
    for ( int t = 0 ; t < T ; t++ ) {
        ll N;
        cin >> N;
        vector<ll> A(N);
        for ( int i = 0; i < N; i++ ) {
            cin >> A[i];
        }
        string S;
        cin >> S;
        auto ans = solve_1(N, A, S);
        ssr << ans << '\n';
    }
    cout << ssr.str();
    return 0;
}