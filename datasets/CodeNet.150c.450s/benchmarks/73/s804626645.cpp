#include <iostream>
using namespace std;


int *D;
int n = 1;


void initTree(int n_) {
    while (n < n_) {
        n *= 2;
    }
    D = new int[2 * n - 1];
    for (int i = 0; i <= 2 * n - 1; ++i) {
        D[i] = 0;
    }
}

void add(int k, int a) {
    k += n - 1;
    D[k] += a;
    while (k > 0) {
        k = (k - 1) / 2;
        D[k] = D[k*2+1] + D[k*2+2];
    }
}

int query(int a, int b, int k, int l, int r) {

    if (r <= a || b <= l) {
        return 0;
    }
    if (a <= l && r <= b) {
        return D[k];
    }
    return query(a, b, 2 * k + 1, l, (l + r) / 2) + query(a, b, 2 * k + 2, (l + r) / 2, r);
}

int findRSQ(int a, int b) {
    return query(a, b, 0, 0, n);
}

int main() {
    int size;
    int q;
    int x, y;
    int operation;
    cin >> size >> q;
    initTree(size);
    for (int i = 0; i < q; ++i) {
        cin >> operation >> x >> y;
        x--;
        if (operation == 0) {
            add(x, y);
        } else {
            cout << findRSQ(x, y) << endl;
        }
    }
    return 0;
}
