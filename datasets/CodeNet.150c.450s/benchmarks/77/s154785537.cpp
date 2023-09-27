#include <bits/stdc++.h>

using namespace std;

int dx['Z'], dy['Z'];

int main()
{
    dx['E'] = 1;
    dx['W'] = -1;
    dy['N'] = 1;
    dy['S'] = -1;

    int n;
    while(cin>>n, n)
    {
        bool f[21][21];
        fill(f[0], f[21], false);
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin >> x >> y;
            f[y][x] = true;
        }
        int m;
        cin >> m;
        int ct = 0;
        int px, py;
        px = py = 10;
        for(int i=0; i<m; i++)
        {
            string dir;
            int dst;
            cin >> dir >> dst;
            char c = dir[0];
            for(int j=0; j<dst; j++)
            {
                px += dx[c];
                py += dy[c];
                if(f[py][px])
                {
                    ct++;
                    f[py][px] = false;
                }
            }
        }
        cout << (ct==n ? "Yes" : "No") << endl;
    }
}