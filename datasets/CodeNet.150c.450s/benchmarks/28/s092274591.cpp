#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const ll INF = 1000000000;

int n, k;
vector<int> items;

bool ok(int p)
{
    int c = 1;
    int sum = 0;
    rep(i, n)
    {
        if (items[i] > p)
            return false;
        if (sum + items[i] <= p)
        {
            sum += items[i];
        }
        else
        {
            c++;
            sum = items[i];
        }
    }
    if (c > k)
        return false;
    return true;
}

int main()
{
    cin >> n >> k;
    items.resize(n);
    rep(i, n) cin >> items[i];
    int l = 0;
    ll h = INF;
    while (l + 1 < h)
    {
        int m = (l + h) / 2;
        if (ok(m))
        {
            h = m;
        }
        else
        {
            l = m;
        }
    }
    cout << h << endl;
    return 0;
}
