#include <stdio.h>
char c[1000][1000];
bool went[1000][1000];
int ans,n,m;
void go(int x,int y){
    if(x>=n||y>=m||x<0||y<0)return ;
    if(c[x][y]=='#')return;
    if(went[x][y])return;
    went[x][y]=true;
    go(x+1,y);
    go(x,y+1);
    go(x-1,y);
    go(x,y-1);
    ans++;
    return ;
}
int main(){
    bool f;
    while(1){
        scanf("%d%d",&m,&n);
        if(n==0&&m==0)return 0;
        f=true;
        ans=0;
        for(int i=0;i<n;i++)scanf("%s",c[i]);
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)went[i][j]=false;
        for(int i=0;i<n&&f;i++)for(int j=0;j<m&&f;j++)if(c[i][j]=='@'){
            go(i,j);
            f=false;
        }
        printf("%d\n",ans);
    }
}