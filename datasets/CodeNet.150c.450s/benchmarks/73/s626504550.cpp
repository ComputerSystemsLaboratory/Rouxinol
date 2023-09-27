#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


struct SegTree
{
    public:
        int n;
        const int MAX = 100000;

        vector<int> tree;

        SegTree(int n)
        {
            tree = vector<int>(MAX * 4, 0);

            SegTree::n = 1;
            while (SegTree::n < n)
                SegTree::n *= 2;
        }

        void update(int i, int x)
        {
            i += (n - 1);
            tree[i] += x;
            while (i > 0) {
                i = (i - 1) / 2;
                tree[i] += x;
            }
        }

        int find(int s, int t)
        {
            return find_sub(s, t, 0, 0, n);
        }

    private:

        int find_sub(int s, int t, int k, int l, int r)
        {
            if (r <= s || t <= l)
                return 0;

            if (s <= l && r <= t)
                return tree[k];

            int u, v;
            u = find_sub(s, t, k * 2 + 1, l, (l + r) / 2);
            v = find_sub(s, t, k * 2 + 2, (l + r) / 2, r);
            return u + v;
        }
};


int main()
{
    int n, q;
    cin >> n >> q;
    SegTree st(n);

    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            st.update(x - 1, y);
        } else {
            int ret = st.find(x - 1, y);
            cout << ret << endl;
        }
    }

    return 0;
}

