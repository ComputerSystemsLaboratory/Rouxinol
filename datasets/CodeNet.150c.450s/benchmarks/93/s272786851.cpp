#include <iostream>
#include <string>
using namespace std;

struct Card {char suit; int val; };

const int MAX = 100000, SENTINEL = 2100000000;
Card L[MAX / 2 + 2], R[MAX / 2 + 2];
int cnt;

void merge(Card A[], int n, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1].val = R[n2].val = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        cnt++;
        if (L[i].val <= R[j].val) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}

void msort(Card A[], int n, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        msort(A, n, left, mid);
        msort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}

int partition(Card A[], int p, int r) {
    Card x = A[r];
    int i = p - 1;
    for (int j  = p; j < r; j++) {
        if (A[j].val <= x.val) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void qsort(Card A[], int n, int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        qsort(A, n, p, q - 1);
        qsort(A, n, q + 1, r);
    }
}

int main(void) {
    int n;
    Card A[MAX], B[MAX];
    cin >> n;
    string s;
    int v;
    for (int i = 0; i < n; i++) {
        cin >> s >> v;
        A[i].suit = B[i].suit = s[0];
        A[i].val = B[i].val = v;
    }

    msort(A, n, 0, n);
    qsort(B, n, 0, n - 1);

    int stable = 1;
    for (int i = 0; i < n; i++) {
        if (A[i].suit != B[i].suit) stable = 0;
    }

    cout << (stable ? "Stable" : "Not stable") << endl;
    for (int i = 0; i < n; i++) {
        cout << B[i].suit << " " << B[i].val << endl;
    }

    return 0;
}
