#include<iostream>

using namespace std;

const int N = 100005, INF = 1e9;
struct card
{
    char suit;
    int value;
};
void swap(card *x, card *y){
    card z;
    z = *y;
    *y = *x;
    *x = z;
}
void merge(card A[], int p, int q, int r){
    int n1, n2;
    n1 = q - p + 1;
    n2 = r - q;
    card L[N], R[N];
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];
    for (int i = 0; i < n2; i++)
        R[i] = A[q + i + 1];
    L[n1].value = INF;
    R[n2].value = INF;
    int i = 0, j = 0;
    for (int k = p; k <= r; k++)
    {
        if (L[i].value <= R[j].value)
        {
            A[k] = L[i];
            i++;
        }
        else 
        {
            A[k] = R[j];
            j++;
        }
    }    
}

void merge_sort(card A[], int p,int r){
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A, p, q, r);
    }
}
int partition(card A[], int p, int r){
    int  i, j;
    card x;
    x = A[r];
    i = p - 1;
    for (j = p; j < r; j++)
    {
        if (A[j].value <= x.value)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[j]);
    return i+1;
}

void quick_sort(card A[], int p, int r){
    int q;
    if(p < r){
        q = partition(A, p, r);
        quick_sort(A, p, q-1);
        quick_sort(A, q+1, r);
    }
}


int main(){
    int n; cin >> n;
    card A[100005], B[100005];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].suit >> A[i].value;
        B[i].suit = A[i].suit;
        B[i].value = A[i].value;
    }
    quick_sort(A, 0, n-1);
    merge_sort(B, 0, n-1);
    bool stable = true;
    for (int i = 0; i < n; i++)
    {
        if(A[i].suit != B[i].suit){
            stable = false;
            break;
        }
    }
    cout << (stable ? "Stable" : "Not stable") << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i].suit << " " << A[i].value << endl;
    }
}
