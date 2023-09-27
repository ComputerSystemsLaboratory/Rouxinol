#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define SENTINEL 2000000000
typedef struct Card
{
    char suit;
    int value;
} Card;

Card L[MAX/2+2], R[MAX/2+2];

void Merge(Card A[], int left, int mid, int right)
{
    int p1 = mid - left;
    int p2 = right - mid;
    for (int i=0; i<p1; ++i) L[i] = A[left+i];
    for (int i=0; i<p2; ++i) R[i] = A[mid+i];
    L[p1].value = R[p2].value = SENTINEL;
    int i=0, j=0;
    for (int k=left; k<right; ++k) {
        if (L[i].value <= R[j].value) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}
void MergeSort(Card A[], int left, int right)
{
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        MergeSort(A, left, mid);
        MergeSort(A, mid, right);
        Merge(A, left, mid, right);
    }
}
int Partition(Card A[], int p, int r)
{
    int i, j;
    Card x, t;
    i = p - 1;
    x = A[r];
    for ( j=p; j<r; ++j) {
        if (A[j].value <= x.value) {
            i++;
            t = A[i]; A[i] = A[j]; A[j] = t;
        }
    }
    t = A[i+1]; A[i+1] = A[r]; A[r] = t;
    return i + 1;
}
void QuickSort(Card A[], int p, int r)
{
    int q;
    if (p < r) {
        q = Partition(A, p, r);
        QuickSort(A, p, q-1);
        QuickSort(A, q+1, r);
    }
}
int main()
{
    int n, v;
    char s[5];
    Card A[MAX], B[MAX];
    int stable = 1;

    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> s >> v;
        A[i].suit = B[i].suit = s[0];
        A[i].value = B[i].value = v;
    }

    MergeSort(A, 0, n);
    QuickSort(B, 0, n-1);

    for (int i=0; i<n; ++i) {
        if (A[i].suit != B[i].suit) stable = 0;
    }

    if (stable == 1) cout << "Stable" << endl;
    else cout << "Not stable" << endl;

    for (int i=0; i<n; ++i) {
        cout << B[i].suit << " " << B[i].value << endl;
    }
    //for (int i=0; i<n; ++i)
      //  cout << A[i].suit << " " << A[i].value << endl;
    return 0;
}

