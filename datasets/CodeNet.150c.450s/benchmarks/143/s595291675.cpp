#include <bits/stdc++.h>          
using namespace std;              
typedef long long ll; 

int main() {
    ll N, Q, all=0;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) {
        cin >> A[i];
        all += A[i];
    }
    cin >> Q;
    vector<ll> B(Q), C(Q), S(Q);
    for (ll i=0; i<Q; i++) {
        cin >> B[i] >> C[i];
    }

    sort(A.begin(),A.end());
    ll maxA = A[N-1];
    vector<ll> count(pow(10,5),0);
    for (ll i=0; i<N; i++) {
        count[A[i]-1]++;
    }

    for (ll i=0; i<Q; i++) {
        all += count[B[i]-1] * (C[i]-B[i]);
        S[i] = all;
        count[C[i]-1] += count[B[i]-1];
        count[B[i]-1] = 0; 
    }

    for (ll i=0; i<Q; i++) {
        cout << S[i] << endl;
    }
}