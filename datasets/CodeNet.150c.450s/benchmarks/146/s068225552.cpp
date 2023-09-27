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
    double x1, x2, x3, x4, y1, y2, y3, y4;
    int n;
    cin >> n;
    rep(i, n)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if (abs((y2 - y1) * (x4 - x3) - (y4 - y3) * (x2 - x1)) < 0.0000000001)
        {
            OP("YES")
        }
        else
        {
            OP("NO")
        }
    }
    return 0;
}
