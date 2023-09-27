//AOJ0118 Property Distribution
#include<cstdio>
char map[105][105];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int W,H;
void dfs(int x,int y,char ch){
    map[x][y]='.';
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0&&nx<H&&ny>=0&&ny<W&&map[nx][ny]==ch)
            dfs(nx,ny,ch);
    }
}
int main(){
    while(scanf("%d%d",&H,&W),H!=0&&W!=0){
        int cnt=0;
        for(int i=0;i<H;i++)
            scanf("%s",map[i]);        
        for(int i=0;i<H;i++)
            for(int j=0;j<W;j++)
                if(map[i][j]!='.'){
                    cnt++;
                    dfs(i,j,map[i][j]);
                }
        printf("%d\n",cnt);
    }
    return 0;
}