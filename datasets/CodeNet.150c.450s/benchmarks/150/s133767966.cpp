#include <iostream>
using namespace std;
#define MAX 2000005

int C[MAX], n, A[MAX], B[MAX];
void countingSort(int A[], int B[], int k)
{
    for(int i=0; i<=k; i++)
        C[i] = 0;
    for(int j=1; j<=n; j++)
        C[A[j]]++;
    for(int i=1; i<=k ;i++)
        C[i] += C[i-1];
    for(int i=n; i>=1; i--)
    {
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
}
int main()
{
    cin >> n;
    cin >> A[1];
    int max = A[1];
    for(int i=2; i<=n; i++)
    {
        cin >> A[i];
        if(max < A[i])
            max = A[i];
    }
    countingSort(A,B,max);
    for(int i=1; i<=n-1; i++)
        cout << B[i] << " ";
    cout << B[n] << endl;
    return 0;
}