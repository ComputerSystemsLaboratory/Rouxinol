#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
typedef pair<int, int> P;
int sx,sy,H,W,N;
char map1[1002][1002];
int step[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
void find1(int g){
for(int i = 0; i < W; i++)
    for(int k = 0; k < H; k++)
        if(map1[i][k] == 'S' || map1[i][k] == (g+48)){
        if(map1[i][k] == 'S') map1[i][k] ='.';
        sx = i; sy = k;
        return ;
    }
}

int bfs(int n)
{
    memset(step,-1,sizeof(step));
    queue <P> que;
    que.push(P (sx,sy));
    step[sx][sy] = 0;
    while(que.size()){
        int x = que.front().first, y = que.front().second;
        que.pop();
        for(int i = 0; i < 4; i++){
            int xn = x + dx[i], yn = y + dy[i];
            if(xn >= 0 && xn < W && yn >= 0 && yn < H && map1[xn][yn] != 'X' && step[xn][yn] == -1)
                {
                    step[xn][yn] = step[x][y] + 1;
                    if(map1[xn][yn] == (n+48))
                        {
                            return step[xn][yn];
                        }
                    que.push(P(xn, yn));
                }
        }
    }
return 0;
}

int main()
{
    cin >> W >> H >> N;
    for(int i = 0; i < W; i++)
        for(int k = 0; k < H; k++)
        cin >> map1[i][k];
    int step = 0;
    find1(0);
    step += bfs(1);
    for(int i = 1; i < N; i++)
    {

        find1(i);
        step += bfs(i+1);
    }
    cout << step << endl;
    return 0;
}