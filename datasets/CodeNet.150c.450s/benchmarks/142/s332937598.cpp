#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i >= k && a[i - k] < a[i]) cout << "Yes" << endl;
        else if (i >= k) cout << "No" << endl;
    }
    return 0;
}