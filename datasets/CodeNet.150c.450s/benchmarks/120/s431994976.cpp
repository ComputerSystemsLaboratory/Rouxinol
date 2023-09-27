/*=======================================================================*\
    > File: 	.cpp
    > Author: 	SpongeBob_QDD
    > Mail: 	10132130251@ecnu.cn
    > Time: 	wdu  now
    > Comment:
\*=======================================================================*/

#include<bits/stdc++.h>
#define PB push_back
#define se second
#define fi first
#define iOS std::ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef double DB;
typedef long long LL;
typedef pair<int, int> P;
const LL INFF = 0x3f3f3f3f3f3f3f3fLL;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
const int MOD = int(1e9) + 9;
const int INF = 0x3f3f3f3f;
const DB PI = acos(-1.0);
const DB EPS = 1e-9;
const DB OO = 1e20;
const int MAXN = 10000;

bitset <MAXN> s[10];
int cnt[MAXN];
int main()
{
    iOS;
    int n, m, x;
    while (cin >> n >> m, n||m)
    {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                cin >> x;
                s[i][j] = x;
            }
        int N = 1 << n, ans = 0;
        for (int i = 0; i < N; ++i)
        {
            int sum = 0;
            memset(cnt, 0, sizeof(cnt));
            for (int j = 0; j < n; ++j)
                if (i & (1 << j))
                    s[j].flip();
            for (int j = 0; j < n; ++j)
                for (int k = 0; k < m; ++k)
                    cnt[k] += s[j][k];
            for (int j = 0; j < m; ++j)
                sum += max(cnt[j], n-cnt[j]);
            ans = max(ans, sum);
            for (int j = 0; j < n; ++j)
                if (i & (1 << j))
                    s[j].flip();
        }
        cout << ans << endl;
    }
    return 0;
}