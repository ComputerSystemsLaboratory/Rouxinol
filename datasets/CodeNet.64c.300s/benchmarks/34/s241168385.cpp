#include <iostream>
using namespace std;

int main(void) {
    int n, i, j, t;
    cin >> n;
    int A[n];

    for (i = 0; i < n; i++) {
        cin >> A[i];
        cout << A[i];
        if (i == n - 1) cout << endl;
        else cout << ' ';
    }

    for (i = 1; i < n; i++) {
        t = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > t) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = t;

        for (j = 0; j < n; j++) {
            cout << A[j];
            if (j == n-1) cout << endl;
            else cout << ' ';
        }
    }
    return 0;
}