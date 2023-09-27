#include <iostream>
using namespace std;

const int MAX = 100 + 5;
int a[4] = {1, -1, 0, 0};
int b[4] = {0, 0, -1, 1};
int w, h;
char s[MAX][MAX];

void dfs(int x, int y, char tmp)
{
	for(int i = 0; i < 4; i++)
	{
		int nx = x + a[i];
		int ny = y + b[i];
		if(nx >= 0 && nx < h && ny >= 0 && ny < w && s[nx][ny] == tmp)
		{
			s[nx][ny]='0';
			dfs(nx,ny,tmp);
		}
	}
}

int main()
{
    while(cin >> h >> w)
    {
        if(!w || !h) break;
        for(int i = 0; i < h; ++i)
            for(int j = 0; j < w; ++j)
            {
                cin >> s[i][j];
            }


        int ans = 0;
        for(int j = 0; j < h; ++j)
            for(int k = 0; k < w; ++k)
            {
                if(s[j][k] != '0')
                {
                    char c = s[j][k];
                    s[j][k] = '0';
                    ans++;

                 dfs(j, k, c);
                }
            }
        cout << ans << endl;
    }
    return 0;

}