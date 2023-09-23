#include<cstdio>

char c[100][100];

void dfs(int x,int y){
    char ch=c[x][y];
    c[x][y]=0;
    int dx[4]={0,0,1,-1};
    int dy[4]={-1,1,0,0};
    for(int i=0;i<4;i++){
        if(x+dx[i]<100&&x+dx[i]>=0&&y+dy[i]<100&&y+dy[i]>=0&&ch==c[x+dx[i]][y+dy[i]]){
            dfs(x+dx[i],y+dy[i]);
        }
    }
    return;
}

int solve(int h,int w){
    for(int i=0;i<h;i++){
        getchar();
        for(int j=0;j<w;j++){
            c[i][j]=getchar();
        }
    }
    int res=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(c[i][j]!=0){
                res++;
                dfs(i,j);
            }
        }
    }
    return res;
}

int main(){
    while(1){
        int h,w;
        scanf("%d %d",&h,&w);
        if(h==0&&w==0) return 0;
        else printf("%d\n",solve(h,w));
    }
}