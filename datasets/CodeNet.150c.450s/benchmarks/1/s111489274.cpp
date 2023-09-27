#include <iostream>
#include <algorithm>
using namespace std;

static const int MAX_N = 100000;

int n;
int A[MAX_N+1], L[MAX_N];

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int l = 1;
    L[0] = A[0];

    for (int i = 1; i < n; i++) {
        if (L[l-1] < A[i]) {
            L[l++] = A[i];
        } else {
            *lower_bound(L, L+l, A[i]) = A[i];
        }
    }

    cout << l << endl;

    return 0;
}