#include <iostream>
using namespace std;

void merge(int A[], int n, int left, int mid, int right, int &ans) {
    int *tmp = new int[n];

    for (int i = left; i <= mid; ++i) {
        tmp[i] = A[i];
    }

    for (int i = mid + 1, j = right; i <= right; --j, ++i) {
        tmp[i] = A[j];
    }

    int i = left;
    int j = right;
    for (int k = left; k <= right; ++k) {
        ++ans;
        if (tmp[i] <= tmp[j]) {
            A[k] = tmp[i++];
        } else {
            A[k] = tmp[j--];
        }
    }

    delete[] tmp;
}

void mergeSort(int A[], int n, int left, int right, int &ans) {
    if (right <= left) return;

    int mid = (left + right) / 2;
    mergeSort(A, n, left, mid, ans);
    mergeSort(A, n, mid + 1, right, ans);
    merge(A, n, left, mid, right, ans);
}

int main() {

    int n;
    cin >> n;

    int *S = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> S[i];
    }

    int ans = 0;
    mergeSort(S, n, 0, n - 1, ans);

    for (int i = 0; i < n; ++i) {
        if (i) cout << " ";
        cout << S[i];
    }
    cout << endl;
    cout << ans << endl;

    return 0;
}