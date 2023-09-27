#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <cmath>
using namespace std;
typedef long long i64;
typedef long double ld;
typedef pair<i64, i64> P;
#define rep(i, s, e) for (int i = (s); i <= (e); i++)

int n;
int m;

int s[100];
int t[100];

int main()
{
    while (cin >> n >> m, n)
    {
        rep(i, 0, n - 1) cin >> s[i];
        rep(i, 0, m - 1) cin >> t[i];
        int a = 0;
        int b = 0;
        rep(i, 0, n - 1) a += s[i];
        rep(i, 0, m - 1) b += t[i];
        using P2 = pair<int, P>;
        priority_queue<P2, vector<P2>, greater<P2>> que;

        rep(i, 0, n - 1) rep(j, 0, m - 1)
        {
            int c = a - s[i] + t[j];
            int d = b - t[j] + s[i];
            if (c == d)
            {
                que.push({s[i] + t[j], {s[i], t[j]}});
            }
        }

        if (que.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << que.top().second.first << " " << que.top().second.second << endl;
        }
    }
}
