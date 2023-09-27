#include <bits/stdc++.h>

using namespace std;

struct SegTree {
    vector<int> node;
    int n;
    SegTree(int sz) {
        n = 1;
        while (sz > n) n *= 2;
        node.resize(2 * n - 1, 0);
    }
	void add(int k, int val) {
        k += (n - 1);
        node[k] += val;
 
        while(k > 0) {
            k = (k - 1) / 2;
            node[k] = node[2*k+1] + node[2*k+2];
        }
    }/*
    void add(int p, int x) {
        p += n-1;
        do {
            node[p] += x;
            p = (p-1) / 2;
        } while (p);
    }*/
    int get(int a, int b, int k = 0, int l = 0, int r = -1) {
        if (r < 0) r = n;
        if (b <= l || r <= a) return 0;
        if (a <= l && r <= b) {
            return node[k];
        }
        return get(a, b, k * 2 + 1, l, (l + r) / 2) + get(a, b, k * 2 + 2, (r + l) / 2, r);
    }
};

int main()
{
    int n, q;
    cin >> n >> q;
    SegTree s(n);
    while (q--) {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 0) {
            s.add(x-1, y);
        } else {
            cout << s.get(x-1, y) << endl;
        }
    }
}
