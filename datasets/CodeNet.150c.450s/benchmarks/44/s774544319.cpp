#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(m) cout << m << endl;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    while (1)
    {
        vector<int> a(4), b(4);
        rep(i, 4)
        {
            cin >> a[i];
        }

        rep(i, 4)
        {
            cin >> b[i];
            if (cin.eof())
                return 0;
        }

        int hit = 0, blow = 0;

        rep(i, 4)
        {
            if (a[i] == b[i])
            {
                hit++;
            }
            else if (find(ALL(a), b[i]) != a.end())
            {
                blow++;
            }
        }
        cout << hit << " " << blow << endl;
    }
    return 0;
}
