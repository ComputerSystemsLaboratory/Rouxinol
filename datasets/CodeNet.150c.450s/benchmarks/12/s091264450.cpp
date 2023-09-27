#include <iostream>

using namespace std;

const int kMaxN = 100000;

int parent(int i) {
    return i / 2;
}

int left(int i) {
    return 2 * i;
}

int right(int i) {
    return 2 * i + 1;
}

int main() {
    int n;
    int A[kMaxN];

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << "node " << i << ": key = " << A[i] << ", ";
        if (parent(i) >= 1) {
           cout << "parent key = " << A[parent(i)] << ", ";
        }
        if (left(i) <= n) {
            cout << "left key = " << A[left(i)] << ", ";
        }
        if (right(i) <= n) {
            cout << "right key = " << A[right(i)] << ", ";
        }
        cout << endl;
    }
}