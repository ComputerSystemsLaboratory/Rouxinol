#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a = 100000;

    for (int i = 0; i < n; ++i) {
        a += (double)a * (5 / 100.0);
        a += (1000 - a % 1000) % 1000;
    }

    cout << a << endl;
}