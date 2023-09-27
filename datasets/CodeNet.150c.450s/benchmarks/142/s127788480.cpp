#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e6 + 34;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = k; i < n; i++)
    {
        if (a[i] > a[i - k]) cout << "Yes\n";
        else cout << "No\n";
    }
}
