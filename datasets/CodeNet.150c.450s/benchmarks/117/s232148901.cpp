#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define INF 1e9 + 1
using namespace std;

int n, A[501000];
int cnt;

void merge(int A[], int n, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1 + 1], R[n2 + 1];
    REP(i, n1) L[i] = A[left + i];
    REP(i, n2) R[i] = A[mid + i];
    L[n1] = INF;
    R[n2] = INF;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
        cnt++;
    }
}

void mergeSort(int A[], int n, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}

int main() {
    cin >> n;
    REP(i, n) cin >> A[i];
    mergeSort(A, n, 0, n);
    REP(i, n) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << cnt << endl;
}
