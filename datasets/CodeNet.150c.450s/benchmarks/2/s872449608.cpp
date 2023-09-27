#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int kSize = 100000;
int A[kSize];

int partition(int p, int r) {
    int x = A[r];
    int i = p - 1;

    for (int j = p; j <= r - 1; ++j) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }

    swap(A[i + 1], A[r]);
    return i + 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int ans = partition(0, n - 1);
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << A[i];
        } else if (i == ans) {
            cout << " " << '[' << A[i] << ']';
        } else {
            cout << " " << A[i];
        }
    }
    
    cout << endl;
    return 0;
}

