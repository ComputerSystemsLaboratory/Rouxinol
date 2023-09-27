#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<char> > field;

int search(field &f, int x, int y)
{
    if(f[y][x]=='#') return 0;
    f[y][x] = '#';
    int res = 1;
    if(f[y][x-1]!='#') res += search(f, x-1, y);
    if(f[y][x+1]!='#') res += search(f, x+1, y);
    if(f[y-1][x]!='#') res += search(f, x, y-1);
    if(f[y+1][x]!='#') res += search(f, x, y+1);
    return res;
}

int main()
{
    int w, h;
    while(cin >> w >> h, w|h)
    {
        field f(h+2, vector<char>(w+2, '#'));
        int sx, sy;
        for(int y=0; y<=h+1; y++) f[y].assign(w+2, '#');
        for(int y=1; y<=h; y++)
        {
            string ln;
            cin >> ln;
            for(int i=0; i<w; i++)
            {
                f[y][i+1] = ln[i];
                int spos = ln.find('@');
                if(spos>=0)
                {
                    sy = y;
                    sx = spos + 1;
                }
            }
        }
        cout << search(f, sx, sy) << endl;
    }
}