#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long lint;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define trep(i, k, n) for (int i = (k); i < (int)(n); ++i)
typedef pair<int, int> P;
int v[6] = {500, 100, 50, 10, 5, 1};
int greed(int n)
{
    int count = 0;
    rep(i, 6)
    {
        int cc = n / v[i];
        n -= cc * v[i];
        count += cc;
    }
    return count;
}
int main()
{
    int n;
    while (scanf("%d%*c", &n))
    {
        if (n == 0)
        {
            break;
        }
        int ans = greed(1000-n);
        cout << ans << endl;
    }
    return 0;
}
