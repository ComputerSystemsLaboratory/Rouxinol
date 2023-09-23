#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

int main()
{
    int a[4], b[4];
    while (cin>>a[0])
    {
        rep(j, 3) cin >> a[j+1];
        rep(j, 4) cin >> b[j];
        int hit = 0, bl = 0;
        rep(i, 4)
        {
            rep(j, 4)
            {
                if (a[i] == b[j])
                {
                    if (i == j)
                        hit++;
                    else
                        bl++;
                }
            }
        }
        cout << hit << ' ' << bl << endl;
    }
    return 0;
}