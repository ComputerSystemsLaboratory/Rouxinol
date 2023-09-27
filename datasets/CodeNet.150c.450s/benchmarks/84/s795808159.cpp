#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

const int MAX = 200000, SENTINEL = 2100000000;
int L[MAX / 2 + 2], R[MAX / 2 + 2];

ll merge(int A[], int n, int left, int mid, int right) {
    ll cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

ll msort(int A[], int n, int left, int right) {
    ll res = 0;
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        res += msort(A, n, left, mid);
        res += msort(A, n, mid, right);
        res += merge(A, n, left, mid, right);
    }
    return res;
}


int main(void) {
    int n, A[MAX];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << msort(A, n, 0, n) << endl;

    return 0;
}