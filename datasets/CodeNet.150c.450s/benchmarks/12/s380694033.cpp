#include <iostream>
using namespace std;

int A[550];

int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n; i++) {
        cout << "node " << i + 1;
        cout << ": key = " << A[i] << ", ";
        if (i) cout << "parent key = " << A[(i - 1) / 2] << ", ";
        if (A[2 * i + 1]) cout << "left key = " << A[2 * i + 1] << ", ";
        if (A[2 * i + 2]) cout << "right key = " << A[2 * i + 2] << ", ";
        cout << endl;
    }
    return 0;
}