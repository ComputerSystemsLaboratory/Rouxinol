#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<cstring>
using namespace std;
const int MAXN = (int) 105;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;

int f[MAXN][MAXN*10];

void work(){
    int x,y,s;
    for(int i=1;i<100;i++){
        for(int j=1;j<=1000;j++){
            int p=j*(100+i)/100;
            if(p<=1000) f[i][p]=max(f[i][p],j);
        }
    }
    while(~scanf("%d%d%d",&x,&y,&s)&&x&&y&&s){
        int mx=0;
        for(int i=1;i<s;i++){
            int j=s-i;
            if(f[x][i]==0||f[x][j]==0) continue;
            int p=f[x][i]*(100+y)/100+f[x][j]*(100+y)/100;
            if(p>mx){
                mx=p;
            }
        }
        printf("%d\n",mx);
    }
}

int main(){
//    freopen("data.in","r",stdin);
    work();
    return 0;
}

