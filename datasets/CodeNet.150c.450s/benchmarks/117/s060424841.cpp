#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int cnt;

void Merge(vector<int> &a, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> l(n1 + 1), r(n2 + 1);

    for (int i = 0; i < n1; ++i)
        l[i] = a[left + i];
    for (int i = 0; i < n2; ++i)
        r[i] = a[mid + i];

    l[n1] = INT_MAX;
    r[n2] = INT_MAX;

    int i = 0, j = 0;
    for (int k = left; k < right; ++k) {
        if (l[i] <= r[j])
            a[k] = l[i++];
        else
            a[k] = r[j++];
        ++cnt;
    }
}

void MergeSort(vector<int> &a, int left, int right)
{
    if (left + 1 < right) {
        int mid = (left + right) * 0.5;
        MergeSort(a, left, mid);
        MergeSort(a, mid, right);
        Merge(a, left, mid, right);
    }
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

    MergeSort(a, 0, n);

    for (int i = 0; i < n; ++i)
        cout << a[i] << (i == n - 1 ? '\n' : ' ');
    cout << cnt << "\n";

    return 0;
}