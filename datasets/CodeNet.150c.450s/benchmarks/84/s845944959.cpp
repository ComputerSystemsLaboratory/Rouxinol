#include<iostream>

using namespace std;
long long sum;
const int N = 200005, INF = 1e9+5;
void merge(int A[], int p, int q, int r){
    int n1, n2;
    n1 = q - p + 1;
    n2 = r - q;
    int L[N], R[N];
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];
    for (int i = 0; i < n2; i++)
        R[i] = A[q + i + 1];
    L[n1] = INF;
    R[n2] = INF;
    int i = 0, j = 0;
    for (int k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else 
        {
            A[k] = R[j];
            sum += n1 - i;
            j++;
        }
    }    
}

void merge_sort(int A[], int p,int r){
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A, p, q, r);
    }
}

int main(){
    int n; cin >> n;
    int A[N];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    merge_sort(A, 0, n-1);
    cout << sum << endl;
}
