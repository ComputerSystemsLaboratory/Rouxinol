#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed;

    string s;
    cin >> s;
    const int n = s.size() + 1;
    vector<int> h(n);
    h[0] = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == '\\')
            h[i] = 1;
        else if (s[i - 1] == '/')
            h[i] = -1;
        else if (s[i - 1] == '_')
            h[i] = 0;
    }
    for (int i = 1; i < n; ++i)
        h[i] += h[i - 1];

    double area = 0.0;
    vector<double> L;
    int left = 0, right = 0;

    while (left < n) {

        right = left + 1;
        if (n <= right)
            break;
        if (h[left] == h[right] || h[left] > h[right]) {
            ++left;
            continue;
        }

        while (right < n && h[left] != h[right])
            ++right;
        if (right == n) {
            ++left;
            continue;
        }

        double tmp = 0.0;
        int p = 0;
        for (int i = left; i < right; ++i) {
            if (s[i] == '\\') {
                tmp += p + 0.5;
                ++p;
            }
            else if (s[i] == '/') {
                tmp += (p - 1) + 0.5;
                --p;
            }
            else
                tmp += p;
        }

        L.emplace_back(tmp);
        area += tmp;
        left = right;
    }

    cout << (int)area << endl;
    cout << L.size();
    for (int i = 0, size = L.size(); i < size; ++i)
        cout << " " << (int)L[i];
    cout << endl;

    return 0;
}