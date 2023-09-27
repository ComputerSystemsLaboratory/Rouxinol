#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//Micro Futures scalping to get my tendies
int main()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll pre[n + 1];
    pre[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        pre[i] = pre[i - 1] + arr[i - 1];
    }
    for (int i = k + 1; i <= n; i++)
    {
        double sum1 = pre[i - 1] - pre[(i - 1) - k];
        double sum2 = pre[i] - pre[i - k];
        sum1 = sum1 / (double)k;
        sum2 = sum2 / (double)k;
        if (sum2 - sum1 > 0.000000000)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}