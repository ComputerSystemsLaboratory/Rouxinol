#include <bits/stdc++.h>
using namespace std;

int lis(vector<int> A) {
    int length = 0;
    vector<int> L;
    L.push_back(-1);
    for (int i = 0; i < A.size(); i++) {
        if (L[length] < A[i]) {
            L.push_back(A[i]);
            length++;
        } else {
            vector<int>::iterator it = lower_bound(L.begin(), L.end(), A[i]);
            *it = A[i];
        }
    }

    return length;
}

int main() {
    int n;
    cin >> n;
    vector<int> A;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        A.push_back(a);
    }

    cout << lis(A) << endl;

    return 0;
}
