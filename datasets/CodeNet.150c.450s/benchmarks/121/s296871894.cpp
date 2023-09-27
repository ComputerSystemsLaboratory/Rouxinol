#include <iostream>
#include <algorithm>
int m, n;
int dir[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
char map[125][125];
char f;
int ans;
using namespace std;
void dfs(int x,int y)
{
    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dir[i][0],ny = y + dir[i][1];
        if (nx >= 1 && nx <= m && ny >= 1 && ny <= n && map[nx][ny] == f)
        {
            map[nx][ny] = ' ';
            dfs(nx,ny);
        }
    }
}

int main()
{
    while (cin >> m >> n && (m || n))
    {
        ans = 0;//豐。譛牙?蟋句喧謌台ケ滓弍驢我コ??縲ゅ?
        for (int i = 1; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
                cin >> map[i][j];
        for (int i = 1; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
            {
                if (map[i][j] != ' ')
                {
                    ans++;
                    f = map[i][j];
                    dfs(i,j);
                }
            }
        cout << ans << endl;
    }
    return 0;
}