#include<iostream>
using namespace std;

#define max 1000

int left(int k) {
    return 2 * k;
}

int right(int k) {
    return 2 * k + 1;
}

int parent(int k) {
    return k / 2;
}

int main() {
    int H;
    int A[max + 1];
    int l, r, p;
    cin >> H;
    for (int i = 1; i <= H; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= H; i++) {
        cout << "node " << i << ": " << "key = " << A[i] << ", ";
        p = parent(i);
        l = left(i);
        r = right(i);
        if (1 <= p && p <= H) {
            cout << "parent key = " << A[p] << ", ";
        }
        if (1 <= l && l <= H) {
            cout << "left key = " << A[l] << ", ";
        }
        if (1 <= r && r <= H) {
            cout << "right key = " << A[r] << ", ";
        }
        cout << "\n";
    }
    return 0;
}

