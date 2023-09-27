#include <iostream>
#include <vector>

using namespace std;

struct RSQ {
    int n;
    vector<int> dat;

    RSQ(int n_) : n{n_} {
        n = 1;
        while (n < n_) {
            n *= 2;
        }
        
        dat.assign(2 * n - 1, 0);
    }

    void add(int k, int a)
    {
        k += n - 1;
        dat[k] += a;
        while (k > 0) {
            k = (k - 1) / 2;
            dat[k] = dat[k * 2 + 1] + dat[k * 2 + 2];
        }
    }

    int sum(int a, int b, int k, int l, int r)
    {
        if (r <= a || b <= l) {
            return 0;
        }

        if (a <= l && r <= b) {
            return dat[k];
        } else {
            int vl = sum(a, b, k * 2 + 1, l, (l + r) / 2);
            int vr = sum(a, b, k * 2 + 2, (l + r) / 2, r);
            return vl + vr;
        }
    }
    
    /* sum [l, r] */
    int sum(int l, int r)
    {
        return sum(l, r + 1, 0, 0, n);
    }
};

int main()
{
    int N, Q;
    cin >> N >> Q;
    RSQ rsq(N);

    for (int i = 0; i < Q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            x--;
            rsq.add(x, y);
        } else {
            x--; y--;
            cout << rsq.sum(x, y) << endl;
        }
    }        
    return 0;
}