#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int M = 1 << 18 + 1;
    int N;
    cin >> N;
    vector<int> A(N), a(N), ord(N);
    for ( int i = 0; i < N; i++ ) {
        cin >> A[i];
        a[i] = A[i];
    }

    sort(a.begin(), a.end());
    for ( int i = 0; i < N; i++ ) {
        ord[i] = lower_bound(a.begin(), a.end(), A[i]) - a.begin();
    }

    ll ans = 0;
    vector<int> bit(M);
    int k,sum;
    for ( int i = 0; i < N; i++ ) {
        // add
        k = ord[i] + 1;
        while ( k <= M ) {
            bit[k]++;
            k += k & -k;
        }
        // sum
        sum = 0;
        k = ord[i] + 1;
        while ( k > 0 ) {
            sum += bit[k];
            k -= k & -k;
        }
        
        ans += i + 1 - sum;
    }

    cout << ans << '\n';
    return 0;
}
