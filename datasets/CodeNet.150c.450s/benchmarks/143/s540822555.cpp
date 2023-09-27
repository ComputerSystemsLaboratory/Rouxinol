#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int const AMAX = 1e5 + 11;

ll freq[AMAX], sum;

void update(ll b, ll c)
{
    sum -= b * freq[b];
    sum += freq[b] * c;
    freq[c] += freq[b];
    freq[b] = 0;
}

inline ll query(void) { return sum; }

int main(void)
{
    int n, q, ai, b, c;
    cin >> n;

    sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> ai;
        freq[ai]++;
        sum += ai;
    }

    cin >> q;
    while (q--)
    {
        cin >> b >> c;
        update(b, c);
        cout << query() << endl;
    }

    return 0;
}
