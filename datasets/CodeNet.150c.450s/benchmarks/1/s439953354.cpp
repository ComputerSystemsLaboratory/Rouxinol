#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
int n, A[MAX + 1], L[MAX];
int lis()
{
    L[0] = A[0];
    int l=1;
    for(int i=1; i<n; i++){
        if (L[l - 1] < A[i])
        {
            L[l++] = A[i];
        }
        else
        {
            *lower_bound(L, L + l, A[i]) = A[i];
        }
    }
    return l;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << lis() << endl;
}
