#include <stdio.h>
int map[100][100],n,m;
bool went[100][100];
void walk(int x,int y){
    if(x<0||y<0||x>=n||y>=m)return ;
    if(went[x][y])return ;
    if(map[x][y]==0)return ;
    went[x][y]=true;
    walk(x-1,y);
    walk(x+1,y);
    walk(x,y+1);
    walk(x,y-1);
    walk(x+1,y+1);
    walk(x+1,y-1);
    walk(x-1,y+1);
    walk(x-1,y-1);
    return ;
}
int main(){
    int ans;
    while(1){
        scanf("%d%d",&m,&n);
        if(n==0&&m==0)return 0;
        ans=0;
        for(int i=0;i<n;i++)for(int j=0;j<m;j++){
            scanf("%d",&map[i][j]);
            went[i][j]=false;
        }
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(!went[i][j]&&map[i][j]==1){
            ans++;
            walk(i,j);
        }
        printf("%d\n",ans);
    }
}