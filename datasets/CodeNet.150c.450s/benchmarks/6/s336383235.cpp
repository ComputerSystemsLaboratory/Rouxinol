#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef int64_t Int;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

