#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long A[n];
    vector<long long> B(n, 1e+10);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    B[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        int ind = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
        B[ind] = A[i];
    }
    cout << lower_bound(B.begin(), B.end(), 1e+10) - B.begin() << endl;
}
