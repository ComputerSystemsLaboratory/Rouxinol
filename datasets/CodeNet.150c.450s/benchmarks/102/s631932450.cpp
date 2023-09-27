#include<iostream>
#include<vector>

using namespace std;

int w;
int h;
string map[20];
bool come[20][20];

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

int dfs(int x, int y)
{
    if(x < 0 || y < 0 || w <= x || h <= y)return 0;
    if(come[y][x])return 0;
    if(map[y][x] == '#')return 0;

    come[y][x] = true;

    int ret = 1;
    for(int i = 0; i < 4;i++)
    {
        ret += dfs(x + dx[i], y + dy[i]);
    }
    return ret;
}

int main()
{
    while( cin >> w >> h, (w | h) )
    {
        
        string gomi;
        getline(cin, gomi);//??°?????????

        int px, py;

        //input
        for (int i = 0; i < h; i++)
        {
            getline(cin, map[i]);
            for(int j = 0; j < w; j++)
            {
                come[i][j] = false;
                if(map[i][j] == '@')
                {
                    px = j;
                    py = i;
                }
            }
        }
        cout << dfs(px, py) << endl;
    }
    return 0;
}