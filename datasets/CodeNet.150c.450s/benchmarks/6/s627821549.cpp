#include <bits/stdc++.h>
#define fastIO (cin.tie(0), cout.tie(0), ios::sync_with_stdio(false))
#define rep(i, n) for (int i = 0; i < (n); ++i)
using lint = long int;
using llint = long long int;
using namespace std;

int main() {
    fastIO;
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

