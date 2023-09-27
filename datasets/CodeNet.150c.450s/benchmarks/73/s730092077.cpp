#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;

class Bit {
private:
    vector<int> bit;
    int n;

public:
    Bit(int _n) {
        n = _n;
        bit.clear();
        bit.resize(n + 1, 0);
    }

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

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    // add x to bit[i]
    void add(int i, int x) {
        while (i <= n) {
            bit[i] += x;
            i += i & -i;
        }
    }
};

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, q;
    cin >> n >> q;
    Bit bit(n);
    rep(i, q) {
        int a, x, y;
        cin >> a >> x >> y;
        if (a == 0) {
            bit.add(x, y);
        }
        else {
            cout << bit.sum(x, y) << endl;
        }
    }

}