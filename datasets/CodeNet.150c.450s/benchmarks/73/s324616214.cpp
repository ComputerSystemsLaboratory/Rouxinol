#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int bit[MAXN];

void update(int a, int b) {
    for (; a < MAXN; a += (a & -a))
        bit[a] += b;
}

int sum(int a) {
    int r = 0;
    for (; a; a -= (a & -a))
        r += bit[a];
    return r;
}

int main() {
    int n, q; cin >> n >> q;
    for (int i = 0; i < q; i++) {
        int o, a, b; cin >> o >> a >> b;
        if (o == 0) {
            update(a, b);
        } else {
            cout << sum(b) - sum(a - 1) << endl;
        }
    }
}
