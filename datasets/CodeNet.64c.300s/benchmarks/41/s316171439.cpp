#include <iostream>
using namespace std;

#define H 500001

int n;

void maxHeapify(int A[], int target) {
    int l = 2*target;
    int r = 2*target + 1;

    int largest;
    if (l <= n && A[l] > A[target]) {
        largest = l;
    } else {
        largest = target;
    }

    if (r <= n && A[r] > A[largest]) {
        largest = r;
    }

    if (largest != target) {
        swap(A[largest], A[target]);
        maxHeapify(A, largest);
    }
}

int main() {
    cin >> n;
    int A[H];

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    for (int i = (n / 2); i >= 1; i--) {
        maxHeapify(A, i);
    }

    for (int i = 1; i <= n; i++) {
        cout << " " << A[i];
    }
    cout << endl;
}
