#include <string>
#include <vector>
#include <iostream>

using namespace std;

int H, W;

vector<string> map;

const vector<int> dx = { 0, 1, 0, -1 };
const vector<int> dy = { 1, 0, -1, 0 };

void rec(int x, int y, char c)
{
    map[y][x] = '.';
    
    for(int i = 0; i < 4; i++)
    {
        if(0 <= x + dx[i] && x + dx[i] < W && 0 <= y + dy[i] && y + dy[i] < H)
        {
            if(map[y + dy[i]][x + dx[i]] == c)
            {
                rec(x + dx[i], y + dy[i], c);
            }
        }
    }
}

int solve()
{
    int ret = 0;
    
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            if(map[i][j] != '.')
            {
                rec(j, i, map[i][j]); ret++;
            }
        }
    }
    
    return ret;
}

int main()
{
    while(true)
    {
        cin >> H >> W;
        
        if(H == 0 && W == 0) { break; }
        
        map = vector<string>(H);
        
        for(int i = 0; i < H; i++)
        {
            cin >> map[i];
        }
        
        cout << solve() << endl;
    }
    
    return 0;
}