#include <iostream>
#include <algorithm>
using namespace std;

long H ;
long A[500001];

long l(long i) {
    return i * 2;
}

long r(long i) {
    return i * 2 + 1;
}

long p(long i) {
    return i/2;
}

void maxify(long i) {
    long mi = i;
    if (l(i) <= H && A[l(i)] > A[i]) {
        mi = l(i);
    }
    if (r(i) <= H && A[r(i)] > A[mi]) {
        mi = r(i);
    }
    if (mi != i) {
        swap(A[i], A[mi]);
        maxify(mi);
    }
}

int main() {
    cin >> H;
    for (long i = 1; i <= H; ++i) {
        cin >> A[i];
    }

    for (long j = H; j >= 1 ; --j) {
        maxify(j);
    }

    for (long k = 0; k < H; ++k) {
        cout << " " << A[k + 1];

    }
    cout << endl;
    return 0;
}

