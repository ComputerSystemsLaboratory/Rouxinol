#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;

    while ((cin >> x >> y), x != 0 || y != 0) {
        cout << min(x, y) << " " << max(x, y) << endl;
    }

    return 0;
}