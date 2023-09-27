#include<iostream>
using namespace std;

#define MAX 100000

void swap(int& a, int& b)
{
    int c;
    c = a; a = b; b = c;
}

int partition(int* A, int p, int r)
{
    int i, j, x;
    x = A[r];
    i = p - 1;
    for(j = p; j < r; j++){
        if(A[j] <= x){ i++; swap(A[i], A[j]); }
    }
    swap(A[i + 1], A[r]);

    return i + 1;
}

int main()
{
    int i, n, A[MAX], q;
    cin >> n;
    for(i = 0; i < n; i++) cin >> A[i];

    q = partition(A, 0, n - 1);

    for(i = 0; i < q; i++){ cout << A[i] << " "; }

    cout << "[" << A[q] << "]";

    for(i = q + 1; i < n; i++){ cout << " " << A[i]; }

    cout << endl;

    return 0;
}