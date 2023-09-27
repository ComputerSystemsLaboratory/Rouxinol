#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int Partition(vector<tuple<char, int, int>> &a, int p, int r)
{
    int x = get<1>(a[r]), i = p - 1;

    for (int j = p; j < r; ++j)
        if (get<1>(a[j]) <= x)
            swap(a[++i], a[j]);

    swap(a[i + 1], a[r]);

    return i + 1;
}

void QuickSort(vector<tuple<char, int, int>> &a, int p, int r)
{
    if (p < r) {
        int q = Partition(a, p, r);
        QuickSort(a, p, q - 1);
        QuickSort(a, q + 1, r);
    }
}

bool Check(vector<tuple<char, int, int>> &a)
{
    const int n = a.size();
    int left = 0, right = 1;

    while (left < n) {
        right = left + 1;
        while (right < n && get<1>(a[left]) == get<1>(a[right])) {
            if (get<2>(a[right]) < get<2>(a[left]))
                return false;
            ++right;
        }
        left = right;
    }

    return true;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;
    vector<tuple<char, int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> get<0>(a[i]) >> get<1>(a[i]);
        get<2>(a[i]) = i;
    }

    QuickSort(a, 0, n - 1);

    if (Check(a))
        cout << "Stable\n";
    else
        cout << "Not stable\n";

    for (int i = 0; i < n; ++i)
        cout << get<0>(a[i]) << " " << get<1>(a[i]) << "\n";

    return 0;
}