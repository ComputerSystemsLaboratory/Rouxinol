#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int i, j, n, cnt=0;
    cin >> n;
    int A[n];

    for (i = 0; i < n; i++) cin >> A[i];

    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            if (A[j] < A[j-1]) {
                swap(A[j], A[j-1]);
                cnt++;
            }
        }
    }

    for (i = 0; i < n; i++) {
        cout << A[i];
        if (i == n - 1) cout << endl;
        else cout << ' ';
    }
    cout << cnt << endl;
    return 0;
}