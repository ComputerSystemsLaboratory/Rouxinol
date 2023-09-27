#include<cstdio>
#include<algorithm>
#include<vector>
int w,h,fld[64][64];

void dfs(int y,int x){
    if(x<0||x>=w||y<0||y>=h)return;
    if(!fld[y][x])return;
    fld[y][x]=0;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(i||j)dfs(y+i,x+j);
        }
    }
}
int main(){
    while(scanf("%d%d",&w,&h),w||h){
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                scanf("%d",&fld[i][j]);
            }
        }

        int cnt=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(fld[i][j]){
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}