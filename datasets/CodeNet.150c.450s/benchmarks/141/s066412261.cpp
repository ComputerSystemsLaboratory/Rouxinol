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

double v_pro(double a[], double b[])
{
    return a[0] * b[1] - a[1] * b[0];
}

int main()
{
    double v[3][2], p[2];
    while (cin >> v[0][0] >> v[0][1] >> v[1][0] >> v[1][1] >> v[2][0] >> v[2][1] >> p[0] >> p[1])
    {
        double w[3][2];

        rep(i, 3)
        {
            rep(j, 2)
            {
                w[i][j] = p[j] - v[i][j];
            }
        }

        if ((v_pro(w[0], w[1]) > 0 && v_pro(w[1], w[2]) > 0 && v_pro(w[2], w[0]) > 0) || (v_pro(w[0], w[1]) < 0 && v_pro(w[1], w[2]) < 0 && v_pro(w[2], w[0]) < 0))
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
