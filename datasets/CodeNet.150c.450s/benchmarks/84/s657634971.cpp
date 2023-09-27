#include<iostream>
using namespace std;

#define SENTINEL 1200000000

typedef long long hyper;
hyper cnt = 0;

void Merge(int* A, int left, int mid, int right)
{
    int* L; int* R;
    int i, j, k, n1, n2;
    n1 = mid - left;
    n2 = right - mid;

    L = new int [n1 + 1]; R = new int [n2 + 1];
    if(L == NULL || R == NULL) return;

    for(i = 0; i < n1; i++) L[i] = A[i + left];
    for(j = 0; j < n2; j++) R[j] = A[j + mid];

    L[n1] = SENTINEL;
    R[n2] = SENTINEL;
    i = j = 0;

    // sorting.
    for(k = left; k < right; k++){

        if(L[i] <= R[j]){ A[k] = L[i]; i++; }

        else{ A[k] = R[j]; j++; cnt = cnt + n1 - i; } // add n1 - i.
    }
	delete [] L; delete [] R;
}

void MergeSort(int* A, int left, int right)
{
    int mid;
    if(left + 1 < right){
        mid = (left + right) / 2;
        MergeSort(A, left, mid);
        MergeSort(A, mid, right);
        Merge(A, left, mid, right);
    }
}

int main()
{
    int* A;
    int i, n;
    cin >> n;

    A = new int [n];
    if(A == NULL) return 0;

    for(i = 0; i < n; i++) cin >> A[i];

    MergeSort(A, 0, n);
    cout << cnt << endl;

    delete [] A;

    return 0;
}