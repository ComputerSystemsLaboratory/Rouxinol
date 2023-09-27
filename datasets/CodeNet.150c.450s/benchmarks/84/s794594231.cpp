#include <iostream>
using namespace std;

#define MAX 200000
#define SENTINEL 2000000000
typedef long long ll;

int L[MAX/2+2], R[MAX/2+2];

ll merge(int A[], int left, int mid, int right) {
    ll cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) {
        L[i] = A[left+i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid+i];
    }
    L[n1] = R[n2] = SENTINEL;
    int l = 0; int r = 0;
    for (int i = left; i < right; i++) {
        if (L[l] <= R[r]) {
            A[i] = L[l++];
        } else {
            A[i] = R[r++];
            cnt += n1 - l;
        }
    }
    return cnt;
}

ll merge_sort(int A[], int left, int right) {
    int mid;
    ll v1, v2, v3;
    if (left+1 < right) {
        mid = (left + right) / 2;
        v1 = merge_sort(A, left, mid);
        v2 = merge_sort(A, mid, right);
        v3 = merge(A, left, mid, right);
        return v1 + v2 + v3;
    } else {
        return 0;
    }
}

int main() {
    int A[MAX], N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    ll ans = merge_sort(A, 0, N);
    cout << ans << endl;
    return 0;
}

