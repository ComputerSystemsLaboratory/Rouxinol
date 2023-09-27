#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i) 
#define MAX 100000
#define SENTINEL 2000000000
typedef long long ll;
using namespace std;

struct Card { char suit; int num; };

Card L[MAX/2 + 2], R[MAX/2 + 2];

int partition(Card A[], int p, int r)
{
    int x = A[r].num;
    int i = p - 1;

    for (int j = p; j < r; ++j){
        if(A[j].num <= x){
            ++i;
            Card t = A[i]; A[i] = A[j]; A[j] = t;
        }
    }
    Card t = A[i+1]; A[i+1] = A[r]; A[r] = t;

    return i+1;
}

void quickSort(Card A[], int p, int r)
{
    if(p < r){
        int pivot = partition(A, p, r);
        quickSort(A, p, pivot-1);
        quickSort(A, pivot, r);
    }
}

void merge(Card B[], int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    rep(i, n1) L[i] = B[left+i];
    rep(i, n2) R[i] = B[mid+i];
    L[n1].num = R[n2].num = SENTINEL;

    int i = 0;
    int j = 0;
    for(int k = left; k < right; ++k){
        if(L[i].num <= R[j].num) B[k] = L[i++];
        else B[k] = R[j++];
    }
}

void mergeSort(Card B[], int left, int right)
{
    if(left + 1 < right){
        int mid = (left + right) / 2;
        mergeSort(B, left, mid);
        mergeSort(B, mid, right);
        merge(B, left, mid, right);
    }
}


int main()
{
    int n;
    Card A[MAX], B[MAX];
    cin >> n;
    rep(i, n) cin >> A[i].suit >> A[i].num;
    rep(i, n) {
        B[i] = A[i];
    }

    quickSort(A, 0, n-1);
    mergeSort(B, 0, n);

    bool stable = 1;
    rep(i, n){
        if(A[i].suit != B[i].suit) stable = 0;
    }
    if (stable) puts("Stable");
    else puts("Not stable");

    rep(i, n){
        cout << A[i].suit << " " << A[i].num << endl;
    }

    return 0;
}
