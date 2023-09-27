#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

const int MAX = 100 + 5;
int a[4] = {1, -1, 0, 0};
int b[4] = {0, 0, -1, 1};

int readchar()
{
    for(;;)
    {
        int ch = getchar();
        if(ch != '\n' && ch != '\r') return ch;
    }
}

int main()
{
    int w, h;
    char s[MAX][MAX];
    queue<int> q;
    while(cin >> h >> w && (w || h))
    {
        queue<int> q;
        for(int i = 0; i < h; ++i)
            for(int j = 0; j < w; ++j)
            {
                s[i][j] = readchar();
            }


        int ans = 0;
        for(int j = 0; j < h; ++j)
            for(int k = 0; k < w; ++k)
            {
                if(s[j][k] != '.')
                {
                    char c = s[j][k];
                    s[j][k] = '.';
                    q.push(j * 100 + k);
                    ans++;
                    while(!q.empty())
                    {
                        int var = q.front();
                        q.pop();
                        for(int i = 0; i < 4; ++i)
                        {
                            int x = var / 100 + a[i];
                            int y = var % 100 + b[i];
                            if(x >= 0 && y >= 0 && x < h && y < w && s[x][y] == c)
                            {
                                s[x][y] = '.';
                                q.push(x * 100 + y);
                            }
                        }
                    }
                }
            }
        cout << ans << endl;
    }
    return 0;

}