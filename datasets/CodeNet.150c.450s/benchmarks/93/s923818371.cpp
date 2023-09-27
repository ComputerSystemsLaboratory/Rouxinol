#include <bits/stdc++.h>
using namespace std;
static const int MAX = 100000;
static const int INFTY = 1000000010;

class Card {
    public:
        char suit;
        int num;
        Card();
};
Card::Card() {
    suit = '\0';
    num = 0;
}
Card A[MAX], B[MAX];

/*------------------------
    Quick Sort
------------------------*/

int partition(Card A[], int p, int r) {
    int x = A[r].num;
    int i = p-1; // i以下がxより小さな値
    for (int j = p; j < r; j++) { // A[j]がxと比べる値
        if (A[j].num <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}

void quickSort(Card A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

/*----------------------------
    Merge Sort
----------------------------*/

Card L[MAX/2 + 2], R[MAX/2 + 2];
void merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left; // left の添え字が0 mid-1 がn1-1
    int n2 = right - mid; // mid の添え字が0 right -1 がn2-1
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }
    L[n1].num = INFTY;
    R[n2].num = INFTY;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].num <= R[j].num) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(Card A[], int left, int right) {
    if (right - left > 1) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
    return;
}

int main() {
    int n;
    bool isStable = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i].suit >> A[i].num;
        B[i].suit = A[i].suit;
        B[i].num = A[i].num;
    }
    quickSort(A, 0, n-1);
    mergeSort(B, 0, n);

    for (int i = 0; i < n; i++) {
        if (A[i].suit != B[i].suit) {
            isStable = false;
            break;
        }
    }
    
    if (isStable) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << A[i].suit << " " << A[i].num << endl;
    }
    return 0;
}
