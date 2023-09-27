#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int A[n];

    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=0; i<n; i++) {
        cout << A[i];
        if (i < n-1) cout << " ";
    }
    cout << endl;
    for (int i=1; i<n; i++) {
        int cur = A[i];
        int j = i - 1;
        while (cur < A[j] && 0 <= j) {
            A[j+1] = A[j];
            j--;
        }
        A[j + 1] = cur;
        for (int i=0; i<n; i++) {
            cout << A[i];
            if (i < n-1) cout << " ";
        }
        cout << endl;
    }
}