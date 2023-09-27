#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define INF 1001001001
using ll = long long;
using dd = long double;

const int D = 60;
const int MAX_N = 200005;
int to[D][MAX_N];


int main() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n+10, 1);
    vector<ll> A(n);
    for (int i=0; i<n; ++i) {
        cin >> A[i];
        if (i < k) {
            v[k-1] *= A[i];
        };
    }
    for (int i=k; i<n; ++i) {
        // v[i] = (v[i-1]/A[i-k])*A[i];
        // if (v[i] > v[i-1]) {
        if (A[i] > A[i-k]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}

