#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n,m;
    int f[21][21];
    char news;
    int d;
    int x,y;
    int flag;
    while(cin>>n&&n)
    {
        for(int i=0;i<21;++i)
        {
            for(int j=0;j<21;++j)
            {
                f[i][j] = 0;
            }
        }
        for(int i=0;i<n;++i)
        {
            cin >> x >> y;
            f[x][y] =1;
        }
        x=10,y=10;
        f[x][y] = 0;
        cin >> m;
        for(int i=0;i<m;++i)
        {
            cin >> news >> d;
            if(news=='N') for(int j=1;j<=d;++j) f[x][++y] = 0;
            if(news=='E') for(int j=1;j<=d;++j) f[++x][y] = 0;
            if(news=='W') for(int j=1;j<=d;++j) f[--x][y] = 0;
            if(news=='S') for(int j=1;j<=d;++j) f[x][--y] = 0;
        }
        flag=0;
        for(int i=0;i<21;++i)
        {
            for(int j=0;j<21;++j)
            {
                if(f[i][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}