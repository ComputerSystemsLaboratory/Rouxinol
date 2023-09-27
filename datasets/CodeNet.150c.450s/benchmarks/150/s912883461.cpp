#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int n;
int A[2000000];
int B[2000000];
int C[10000] = {};

void CountingSort(int k)
{
    for (int i = 0; i < n; i++)
        C[A[i]]++;

    for (int i = 1; i <= k; i++)
        C[i] += C[i - 1];

    for (int i = n - 1; i >= 0; i--)
        B[--C[A[i]]] = A[i];
}

int main()
{
    cin >> n;
    int maxn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        maxn = max(maxn, A[i]);
    }

    CountingSort(maxn);

    for (int i = 0; i < n; i++)
    {
        if (i)
            cout << " ";
        cout << B[i];
    }
    cout << "\n";

    return 0;
}
