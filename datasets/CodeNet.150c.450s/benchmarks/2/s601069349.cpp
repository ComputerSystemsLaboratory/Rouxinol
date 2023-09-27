#include <iostream>
using namespace std;

void swap(int A[], int i, int j)
{
    int t = A[i];
    A[i]  = A[j];
    A[j]  = t;
}

int partition(int A[], int p, int r)
{
    int x = A[r], i = p - 1;
    for (int j = p; j <= r; j++) {
        if (A[j] > x) continue;
        swap(A, ++i, j);
    }
    return i;
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    int p = partition(A, 0, n - 1);
    for (int i = 0; i < n; i++) {
        if (i == p) cout << "[" << A[i] << "]";
        else cout << A[i];
        if (i == (n - 1)) cout << endl;
        else cout << " ";
    }
    return 0;
}