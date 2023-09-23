#include <bits/stdc++.h>
using namespace std;
int partition(int *Array, int p, int last)
{
    int x = Array[last];           //11
    int i = p - 1;                 //-1
    for (int j = p; j < last; ++j) //j=0;j<11;++j
    {
        if (Array[j] <= x) //Array[j]<=Array[11]
        {
            i += 1;
            swap(Array[i], Array[j]);
        }
    }
    swap(Array[i + 1], Array[last]);
    return i + 1;
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    int ans = partition(A, 0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        if (i == ans)
            cout << "[" << A[i] << "]" << ' ' << flush;
        else
        {
            cout << A[i] << flush;
            if (i < n - 1)
                cout << ' ' << flush;
        }
    }
    cout << endl;
}
