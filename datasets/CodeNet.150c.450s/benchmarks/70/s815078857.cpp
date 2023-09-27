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
    int m, d;
    int a[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string w[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    while (cin >> m >> d, m)
    {
        int s = 0;
        rep(i, m - 1) s += a[i];
        cout << w[(s + d) % 7] << endl;
    }
}
