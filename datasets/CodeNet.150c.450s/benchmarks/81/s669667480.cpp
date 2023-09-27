#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
using namespace std;


int maze[50][50];

int tag[20];

int main()
{
    int n;
    while(~scanf("%d",&n) && n){
        memset(tag,0,sizeof(tag));
        memset(maze,0x3f,sizeof(maze));
        for(int i = 0;i <= 9;++i) maze[i][i] = 0;
        int u,v,l;
        for(int i = 1;i <= n;++i){
            scanf("%d%d%d",&u,&v,&l);
            tag[u] = tag[v] = 1;
            maze[u][v] = maze[v][u] = min(maze[u][v],l);
        }
        
        for(int k = 0;k <= 9;++k){
            for(int i = 0;i <= 9;++i){
                for(int j = 0;j <= 9;++j){
                    maze[j][i] = maze[i][j] = min(maze[i][j],maze[i][k] + maze[k][j]);
                }
            }
        }
        int pos = 0;
        long long ans = 0x3f3f3f3f3f3f;
        for(int i = 0;i <= 9;++i){
            long long tmp = 0;
            for(int j = 0;j <= 9;++j){
                if(!tag[j]) continue;
                tmp += maze[i][j];
            }
            if(ans > tmp){
                ans = tmp;
                pos = i;
            }
            
        }
        cout << pos << ' ' << ans << endl;
    }
    return 0;
}

