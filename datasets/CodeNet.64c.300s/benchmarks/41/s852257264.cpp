/**
 * Heaps - Maximum Heap
 */

#include <iostream>

using namespace std;

int H, A[500001];

void heapfy(int *a, int i) {

    int l, r;
    l = i * 2;
    r = i * 2 + 1;

    int i_ = i;

    if (r <= H && a[r] > a[i_]) i_ = r;
    if (l <= H && a[l] > a[i_]) i_ = l;

    if (i_ != i) {
        int tmp = a[i];
        a[i] = a[i_];
        a[i_] = tmp;
        heapfy(a, i_);
    }
}

int main() {

    cin >> H;

    for (int i = 1; i <= H; i++) {
        cin >> A[i];
    }

    for (int i = H / 2; i >= 1; i--) {
        heapfy(A, i);
    }

    for (int i = 1; i <= H; i++) {
        cout << " " << A[i];
    }
    cout << endl;
}
