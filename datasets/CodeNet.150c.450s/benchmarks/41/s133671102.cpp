#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
ll INF = 0x3f3f3f3f3f3f3f3f;
const int maxn = 100 + 5;
ll mp[maxn][maxn];

int main()
{
    
    int v,e;
    scanf("%d%d",&v,&e);
    memset(mp, 0x3f,sizeof(mp));
    for(int i = 1;i <= v;i ++) mp[i][i] = 0;
    int a,b,c;
    for (int i= 0; i < e; i ++) {
        scanf("%d%d%d",&a,&b,&c);
        a ++,b ++;
        mp[a][b] = c;
    }
    for (int k = 1; k <= v; k ++) {
        for (int i = 1; i <= v; i ++) {
            for (int j = 1; j <= v; j ++) {
                if(mp[i][k] != INF && mp[k][j] != INF){
                    mp[i][j] = min(mp[i][j],mp[i][k] + mp[k][j]);
                }
            }
        }
    }
    bool fg = 0;
    for (int i = 1; i <= v; i ++) {
            if(mp[i][i] < 0) {fg = 1;break;}
        
    }
    if(fg) printf("NEGATIVE CYCLE\n");
    else{
        for (int i = 1; i <= v; i ++) {
            for (int j = 1; j <= v; j ++) {
                if(mp[i][j] == INF) printf("INF");
                else printf("%lld",mp[i][j]);
                if(j == v) printf("\n");
                else printf(" ");
            }
        }
    }
    return 0;
}
