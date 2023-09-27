#include<iostream>
using namespace std;

#define MAX 100000
#define SENTINEL 1200000000

struct Card { char suit; int value; };

Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void Merge(Card C[], int left, int mid, int right)
{
    int i, j, k, n1, n2;
    n1 = mid - left;
    n2 = right - mid;
    for(i = 0; i < n1; i++){ L[i] = C[i + left]; }
    for(j = 0; j < n2; j++){ R[j] = C[j + mid]; }

    L[n1].value = SENTINEL;
    R[n2].value = SENTINEL;
    i = j = 0;

    for(k = left; k < right; k++){

        if(L[i].value <= R[j].value){ C[k] = L[i]; i++; }

        else{ C[k] = R[j]; j++; }
    }
}

void MergeSort(Card C[], int left, int right)
{
    int mid;
    if(left + 1 < right){
        mid = (left + right) / 2;
        MergeSort(C, left, mid);
        MergeSort(C, mid, right);
        Merge(C, left, mid, right);
    }
    return;
}

int partition(Card C[], int p, int r)
{
    int i, j;
    Card x = C[r];
    i = p - 1;
    for(j = p; j < r; j++){
        if(C[j].value <= x.value){ 
           i++; 
           swap(C[i].suit, C[j].suit); 
           swap(C[i].value, C[j].value); }
    }
    swap(C[i + 1].suit, C[r].suit);
    swap(C[i + 1].value, C[r].value);

    return i + 1;
}

void quicksort(Card C[], int p, int r)
{
    if(!(p < r)) return;
    int q;
    q = partition(C, p, r);
    quicksort(C, p, q - 1);
    quicksort(C, q + 1, r);
}

bool is_stable(Card C1[], Card C2[], int n)
{
    int i = 0;
    while(i < n){ if(C1[i].suit != C2[i].suit){ return false; } i++; };
    return true;
}

int main()
{
    Card C[MAX], D[MAX];
    int i, n;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> C[i].suit >> C[i].value;
        D[i] = C[i];
    }
    quicksort(C, 0, n - 1);
    MergeSort(D, 0, n);

    if(is_stable(C, D, n)){ cout << "Stable"; }else{ cout << "Not stable"; }
    cout << endl;

    for(i = 0; i < n; i++){
        cout << C[i].suit << " " << C[i].value << endl;
    }

    return 0;
}