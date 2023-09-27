using namespace std;
#include <iostream>

int main()
{
    const int MAX_N = 2000000;
    const int MAX_K = 10000;
    int n;
    cin >> n;
    int *A = new int[n];
    int *B = new int[n];
    int C[MAX_K] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
        C[A[i]]++;
    }
    for(int i = 1; i < MAX_K; i++) C[i] += C[i - 1];
    for(int i = n - 1; i >= 0; i--)
    {
        B[C[A[i]] - 1] = A[i];
        C[A[i]]--;
    }
    for(int i = 0; i < n; i++)
    {
        if(i != 0) cout << " ";
        cout << B[i];
    }
    cout << endl;
}