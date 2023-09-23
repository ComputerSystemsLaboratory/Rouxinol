#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main()
{
    uint a, b, c;
    cin >> a >> b >> c;

    bool flg = a < b && b < c;

    cout << (flg ? "Yes" : "No") << endl;
}

