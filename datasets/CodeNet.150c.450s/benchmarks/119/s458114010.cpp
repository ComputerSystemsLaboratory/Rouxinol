#include <bits/stdc++.h>

using namespace std;
typedef vector<vector<int> > field;

int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

void erase(field &f, int y, int x)
{
    f[y][x] = 0;
    for(int i=0; i<8; i++)
    {
        if(f[y+dy[i]][x+dx[i]]) erase(f, y+dy[i], x+dx[i]);
    }
}

int main()
{
    int w, h;
    while(cin >> w >> h, w|h)
    {
        field f(h+2, vector<int>(w+2, 0));
        for(int y=1; y<=h; y++)
        {
            for(int x=1; x<=w; x++)
            {
                int c;
                cin >> c;
                f[y][x] = c;
            }
        }
        int ct = 0;
        for(int y=1; y<=h; y++)
        {
            for(int x=1; x<=w; x++)
            {
                if(f[y][x])
                {
                    ct++;
                    erase(f, y, x);
                }
            }
        }
        cout << ct << endl;
    }
}