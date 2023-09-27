#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

ll NumberOfInversions(int l, int r, vector<int> &a)
{
    if (r - l <= 1)
        return 0;

    ll res = 0;
    int mid = (r + l) / 2;

    res += NumberOfInversions(l, mid, a);
    res += NumberOfInversions(mid, r, a);

    vector<int> tmp(r - l);
    int idx = 0, idx_l = l, idx_r = mid;
    while (idx < (r - l)) {
        if (idx_l == mid)
            tmp[idx++] = a[idx_r++];
        else if (idx_r == r)
            tmp[idx++] = a[idx_l++];
        else {
            if (a[idx_l] <= a[idx_r])
                tmp[idx++] = a[idx_l++];
            else {
                res += mid - idx_l;
                tmp[idx++] = a[idx_r++];
            }
        }
    }

    for (int i = l; i < r; ++i)
        a[i] = tmp[i - l];

    return res;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    cout << NumberOfInversions(0, n, a) << endl;

    return 0;
}