#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lis(const vector<int>& A) {
    int n = A.size();
    vector<int> L(n, 0);
    L[0] = A[0];
    int length = 1;
    for (int i = 1; i < n; i++) {
        if (L[length - 1] < A[i])
            L[length++] = A[i];
        else
            *lower_bound(L.begin(), L.begin() + length, A[i]) = A[i];
    }
    return length;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a[i] = ai;
    }
    cout << lis(a) << endl;
    return 0;
}