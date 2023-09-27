#include <bits/stdc++.h>
#define rep(i,n) for (int (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;
// Welcome to my source code!

#define MAX 100000
#define SENTINEL 2000000000

struct Card { char suit; int num; };

Card L[MAX / 2], R[MAX / 2];

void merge(Card B[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    rep(i,n1) L[i] = B[left + i];
    rep(i,n2) R[i] = B[mid + i];
    L[n1].num = R[n2].num = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].num <= R[j].num) B[k] = L[i++];
        else B[k] = R[j++];
    }
}

void mergeSort(Card B[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(B, left, mid);
        mergeSort(B, mid, right);
        merge(B, left, mid, right);
    }
}

int partition(Card A[], int p, int r) {
    Card t;    
    int x = A[r].num;
    int i = p-1;
    for (int j = p; j < r; j++) {
        if (A[j].num <= x) {
            i++;
            t = A[i]; A[i] = A[j]; A[j] = t;
        }
    }
    t = A[i+1]; A[i+1] = A[r]; A[r] = t;
    return i+1;
}

void quickSort(Card A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

int main() {
    int n, num;
    char suit;
    cin >> n;
    Card A[n], B[n];

    rep(i,n) {
        cin >> suit >> num;
        A[i].suit = B[i].suit = suit;
        A[i].num = B[i].num = num;
    }

    quickSort(A, 0, n-1);
    mergeSort(B, 0, n);

    rep(i,n) {
        if (A[i].suit != B[i].suit) {
            cout << "Not stable" << endl;
            break;
        }
        if (i == n-1) cout << "Stable" << endl;
    }

    rep(i,n) {
        cout << A[i].suit << ' ' << A[i].num << endl;
    }
}
