#include<iostream>
#include<algorithm>
using namespace std;

bool search(int* A, int* Sum, int val, int i_max) {
    int idx = lower_bound(A, &A[i_max] + 1, val) - A;
    if (idx != i_max + 1 && A[idx] == val) return true;
    if (idx <= 1) return false;
    idx--;
    if (Sum[idx] < val) return false;
    if (search(A, Sum, val - A[idx], idx - 1)) return true;
    if (search(A, Sum, val, idx - 1)) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A, A + n);

    int Sum[n];
    Sum[0] = A[0];
    for (int i = 1; i < n; i++) {
        Sum[i] = Sum[i-1] + A[i];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int m;
        cin >> m;
        if (search(A, Sum, m, n - 1)) {
            cout << "yes" << endl;
            continue;
        }
        cout << "no" << endl;
    }

    return 0;
}