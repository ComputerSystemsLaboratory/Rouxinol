#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()

typedef long long ll;
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
*/

#define MAX 100000
#define SENTINEL 2000000000

struct Card {
    char suit;
    int value;
};

struct Card L[MAX/2+2], R[MAX/2+2];

void merge(struct Card A[], int n, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    REP(i, n1) L[i] = A[left + i];
    REP(i, n2) R[i] = A[mid + i];
    L[n1].value = R[n2].value = SENTINEL;
    int i = 0, j = 0;
    FOR(k, right, left) {
        if(L[i].value <= R[j].value) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}

void mergeSort(struct Card A[], int n, int left, int right) {
    int mid;
    if(left + 1 < right) {
        mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}

int partition (struct Card A[], int n, int p, int r) {
    struct Card t, x;
    x = A[r];
    int i = p - 1;
    FOR(j, r, p) {
        if(A[j].value <= x.value) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i + 1;
}

void quickSort(struct Card A[], int n, int p, int r) {
    if(p < r) {
        int q = partition(A, n, p, r);
        quickSort(A, n, p, q-1);
        quickSort(A, n, q+1, r);
    }
}

int main()
{
    struct Card A[MAX], B[MAX];
    int stable = 1;
    int n;
    cin >> n;
    REP(i, n) {
        int v;
        string S;
        cin >> S >> v;
        A[i].suit = B[i].suit = S[0];
        A[i].value = B[i].value = v;
    }
    
    mergeSort(A, n, 0, n);
    quickSort(B, n, 0, n-1);

    REP(i, n) {
        if(A[i].suit != B[i].suit) stable = 0;
    }

    if(stable) cout << "Stable" << endl;
    else cout << "Not stable" << endl;

    REP(i, n) {
        cout << B[i].suit << " " << B[i].value << endl;
    }
    return 0;
}
