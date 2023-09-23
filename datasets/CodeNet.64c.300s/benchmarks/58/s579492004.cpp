#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>
#include<set>

using namespace std;

char a[110][110];

int ans = 0;
int h, w;

void Solution(int y, int x, char z)
{
    a[y][x] = '0';
    
    if(a[y+1][x] == z)
    {
        Solution(y+1, x, z);
    }
    
    if(a[y - 1][x] == z)
    {
        Solution(y-1, x, z);
    }
    
    if(a[y][x + 1] == z)
    {
        Solution(y, x + 1, z);
    }
    
    if(a[y][x - 1] == z)
    {
        Solution(y, x - 1, z);
    }
}

int main()
{
    while (cin>>h>>w, h)
    {
        ans = 0;
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                a[i][j] = '0';
            }
        }
        
        if(h == 0)
        {
            break;
        }
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                cin >> a[i][j];
            }
        }
        
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(a[i][j] != '0')
                {
                    Solution(i, j, a[i][j]);
                    ans++;
                }
            }
        }
        
        cout<<ans<<endl;
    }
}