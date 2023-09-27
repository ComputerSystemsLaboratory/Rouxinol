#include<iostream>
using namespace std;

int linearSearch(int *A, int q, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == q) {
            sum += 1;
            break;
        }
    }
    return sum;
}

int main() {
    int n, q, sum = 0;
    int A[100001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        sum += linearSearch(A, t, n);
    }
    cout << sum << endl;

    return 0;
}

