#include<iostream>
using namespace std;

#define MAX 100000
#define INFTY 1200000000

int num(char ch)
{
    if(ch == 'S'){ return 0; }
    else if(ch == 'H'){ return 1; }
    else if(ch == 'C'){ return 2; }
    else if(ch == 'D'){ return 3; }else{}
    return 0;
}

char suit(int i)
{
    if(i == 0){ return 'S'; }
    else if(i == 1){ return 'H'; }
    else if(i == 2){ return 'C'; }
    else if(i == 3){ return 'D'; }else{}
    return 'Z';
}

void Merge(int* A, int* s, int left, int mid, int right)
{
    int R[MAX], L[MAX];
    int ch_R[MAX], ch_L[MAX];
    int i, j, k, n1, n2;
    n1 = mid - left;
    n2 = right - mid;
    for(i = 0; i < n1; i++){ L[i] = A[i + left]; ch_L[i] = s[i + left]; }
    for(j = 0; j < n2; j++){ R[j] = A[j + mid]; ch_R[j] = s[j + mid]; }

    L[n1] = INFTY;
    R[n2] = INFTY;
    i = j = 0;

    for(k = left; k < right; k++){

		if(L[i] <= R[j]){ A[k] = L[i]; s[k] = ch_L[i]; i++; }

		else{ A[k] = R[j]; s[k] = ch_R[j]; j++; }
    }
}

void MergeSort(int* A, int* s, int left, int right)
{
    int mid;
    if(left + 1 < right){
        mid = (left + right) / 2;
        MergeSort(A, s, left, mid);
        MergeSort(A, s, mid, right);
        Merge(A, s, left, mid, right);
    }
    return;
}

int partition(int* A, int* s, int p, int r)
{
    int i, j, x;
    x = A[r];
    i = p - 1;
    for(j = p; j < r; j++){
        if(A[j] <= x){ i++; swap(A[i], A[j]); swap(s[i], s[j]); }
    }
    swap(A[i + 1], A[r]);
    swap(s[i + 1], s[r]);

    return i + 1;
}

void quicksort(int* A, int* s, int p, int r)
{
    if(!(p < r)) return;
    int q;
    q = partition(A, s, p, r);
    quicksort(A, s, p, q - 1);
    quicksort(A, s, q + 1, r);
}

bool is_stable(int* s, int* t, int n)
{
    int i = 0;
    while(i < n){ if(s[i] != t[i]) return false; i++; };
    return true;
}

int main()
{
    int i, n;
    char ch;
    int A[MAX], B[MAX], s[MAX], t[MAX];
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> ch; s[i] = num(ch); t[i] = s[i];
        cin >> A[i]; B[i] = A[i];
    }

    quicksort(A, s, 0, n - 1);
    MergeSort(B, t, 0, n);

    if(is_stable(s, t, n)){ cout << "Stable"; } else{ cout << "Not stable"; }
    cout << endl;

    for(int i = 0; i < n; i++){ cout << suit(s[i]) << " " << A[i] << endl; }

    return 0;
}