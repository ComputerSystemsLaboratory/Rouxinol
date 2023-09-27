#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;


const int MAX_N = 1 << 17;

// [1, n]
// BIT is initialized by zeros
// !!initializw the size ""n""!!
int bit[MAX_N + 1], n, q;

// get sum in [1, i]
// sum{[i, j]} = sum{[1, j]} - sum{[1, i-1]}
int sum(int i) {
    int s = 0;
    while (i > 0) {
        s += bit[i];
        i -= i & -i;
    }
    return s;
}

// add x to bit[i]
void add(int i, int x) {
    while (i <= n) {
        bit[i] += x;
        i += i & -i;
    }
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    cin >> n >> q;
    rep(i, q) {
        int c, x, y;
        cin >> c >> x >> y;
        if (c) {
            cout << sum(y) - sum(x - 1) << endl;
        } else {
            add(x, y);
        }
    }
}