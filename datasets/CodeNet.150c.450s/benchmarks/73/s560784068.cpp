#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_SIZE (1 << 17)

int dat[MAX_SIZE * 2 - 1] = { 0 }, size = 1;

int getSum(int sl, int sr, int s, int l, int r) {
    if (r <= sl || sr <= l) {
        return 0;
    }
    if (sl <= l && r <= sr) {
        return dat[s];
    }
    else {
        int vl = getSum(sl, sr, s * 2 + 1, l, (l + r) / 2);
        int vr = getSum(sl, sr, s * 2 + 2, (l + r) / 2, r);
        return vl + vr;
    }
}

void add(int s, int v) {
    s += size - 1;
    dat[s] += v;
    while (s > 0) {
        s = (s - 1) / 2;
        dat[s] = dat[s * 2 + 1] + dat[s * 2 + 2];
    }
}

int main() {
    int n, q, com, x, y;
    cin >> n >> q;
    
    while (size < n) {
        size <<= 1;
    }

    while (q--) {
        cin >> com >> x >> y;
        if (com) {
            cout << getSum(x - 1, y, 0, 0, size) << endl;
        }
        else {
            add(x - 1, y);
        }
    }

    return 0;
}