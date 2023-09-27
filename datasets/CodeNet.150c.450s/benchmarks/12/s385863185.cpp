#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

int A[251];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> A[i];
    }

    for (int i = 1; i <= n; ++i) {
        cout << "node " << i << ": "
        << "key = " << A[i] << ", ";
        if (i > 1) {
            int parent = i / 2;
            cout << "parent key = " << A[parent] << ", ";
        }

        int left = i * 2;
        int right = i * 2 + 1;
        if (left <= n) {
            cout << "left key = " << A[left] << ", ";
        }
        if (right <= n) {
            cout << "right key = " << A[right] << ", ";
        }
        cout << endl;
    }
    return 0;
}

