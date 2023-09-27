#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

struct Dimension {
    int N;
    vector< LL >basis;
    Dimension(int N) : N(N), basis(N, 0) { }

    bool add(LL x) {
        for (int i = 0; i < N; i++) {
            if (x&(1LL<<i)) {
                if (basis[i]) x ^= basis[i];
                else {
                    basis[i] = x;
                    return true;
                }
            }
        }
        return false;
    }
};

char solve() {
    int n;
    cin >> n;

    vector< LL >A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    string s;
    cin >> s;

    Dimension d(60);
    for (int i = n-1; i >= 0; i--) {
        if (d.add(A[i])) {
            if (s[i]=='1') return '1';
        }
    }
    return '0';
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << "\n";
    }


    return 0;
}
