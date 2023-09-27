#include <iostream>
#include <algorithm>
using namespace std;

int n, A[2000100], B[2000100];

void countingSort() {
    int cnt[10010] = {};
    for (int i = 0; i < n; i++) cnt[A[i]]++;
    for (int i = 1; i <= 10000; i++) cnt[i] += cnt[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        B[cnt[A[i]] - 1] = A[i];
        cnt[A[i]]--;
    }
    return;
}

void print() {
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << B[i];
    }
    cout << endl;
    return;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    countingSort();
    print();
    return 0;
}
