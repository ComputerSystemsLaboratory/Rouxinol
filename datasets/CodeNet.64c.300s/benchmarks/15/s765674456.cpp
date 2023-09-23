#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int i, j, m, n, cnt=0;
    cin >> n;
    int A[n];

    for (i = 0; i < n; i++) cin >> A[i];

    for (i = 0; i < n; i++) {
        m = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[m]) {
                m = j;
            }
        }
        if (i != m) {
        swap(A[i], A[m]);
        cnt++;
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