#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long lint;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define trep(i, k, n) for (int i = (k); i < (int)(n); ++i)
typedef pair<int, int> P;
#define H 50
#define W 50
#define INF 1e+9
int h;
int w;
bool m[H][W];
void dfs(int y, int x)
{
    m[y][x] = false;
    trep(i, -1, 2)
    {
        trep(j, -1, 2)
        {
            int ny = y + i;
            int nx = x + j;
            if (0 <= ny && ny < h && 0 <= nx && nx < w && m[ny][nx] == true)
            {
                dfs(ny, nx);
            }
        }
    }
}
int main()
{
    while (scanf("%d%d%*c", &w, &h))
    {
        if (w == 0 && h == 0)
        {
            break;
        }
        rep(i, h)
        {
            rep(j, w)
            {
                cin >> m[i][j];
            }
        }
        int ans = 0;
        rep(i, h)
        {
            rep(j, w)
            {
                if (m[i][j] == true)
                {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
