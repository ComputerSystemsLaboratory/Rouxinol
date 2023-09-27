#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

void Print(const vector<pair<string, int>> &c)
{
    for (auto it : c)
        cout << it.first << (it == c.back() ? '\n' : ' ');
}

bool isStable(int n, const vector<pair<string, int>> &c)
{
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j) {
            if (c[i].first[1] == c[j].first[1])
                if (c[i].second > c[j].second)
                    return false;
                else
                    break;
        }
    return true;
}

bool BubbleSort(int n, vector<pair<string, int>> c)
{
    for (int i = 0; i < n; ++i)
        for (int j = n - 1; i < j; --j)
            if (c[j].first[1]  < c[j - 1].first[1])
                swap(c[j], c[j - 1]);
    // Output
    Print(c);

    return isStable(n, c);
}

bool SelectionSort(int n, vector<pair<string, int>> c)
{
    for (int i = 0; i < n; ++i) {
        int min_idx = i;
        for (int j = i; j < n; ++j)
            if (c[j].first[1] < c[min_idx].first[1])
                min_idx = j;
        swap(c[i], c[min_idx]);
    }

    // Output
    Print(c);

    return isStable(n, c);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    vector<pair<string, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }

    cout << (BubbleSort(n, a) ? "Stable\n" : "Not stable\n");
    cout << (SelectionSort(n, a) ? "Stable\n" : "Not stable\n");

    return 0;
}