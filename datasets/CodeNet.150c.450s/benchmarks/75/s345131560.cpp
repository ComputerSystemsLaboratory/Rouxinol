#include <iostream>

using namespace std;
int H, A[500001];

void heapfy(int i) {

    int l, r;
    l = i * 2 + 1;
    r = i * 2 + 2;

    int i_ = i;

    if (l < H && A[l] > A[i_]) i_ = l;
    if (r < H && A[r] > A[i_]) i_ = r;

    if (i_ != i) {
        int tmp = A[i];
        A[i] = A[i_];
        A[i_] = tmp;
        heapfy(i_);
    }
}

int main() {

    cin >> H;

    for (int i = 0; i < H; i++) {
        cin >> A[i];
    }

    for (int i = (H - 1) / 2; i >= 0; i--) {
        heapfy(i);
    }

    for (int i = 0; i < H; i++) {
        cout << " " << A[i];
    }
    cout << endl;
}
