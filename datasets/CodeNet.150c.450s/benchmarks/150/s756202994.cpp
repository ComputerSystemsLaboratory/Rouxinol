#include <iostream>
#define MAX 10000
using namespace std;

int main() 
{
    int n;
    unsigned short *A, *B;
    int C[MAX+1];
    cin >> n;
    A = new unsigned short[n];
    B = new unsigned short[n];
    for (int i = 0; i <= MAX; ++i) C[i] = 0;
    for (int i = 0; i < n; ++i) 
    {
        B[i] = 0;
        cin >> A[i];
        C[A[i]] ++;
    }
    for (int i = 1; i <= MAX; ++i) C[i] = C[i] + C[i-1];
    for (int i = n-1; i >= 0; --i) 
    {
        B[--C[A[i]]] = A[i];
    }
    for (int i = 0; i < n; ++i) 
    {
        if (i) cout << " ";
        cout << B[i];
    }
    cout << endl;
}
