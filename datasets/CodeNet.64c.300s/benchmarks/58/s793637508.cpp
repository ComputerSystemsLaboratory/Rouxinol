#include<stdio.h>

int map[102][102];

void paint(int x,int y,int type){
    if(map[x][y]==type){
        map[x][y]=0;
        paint(x-1,y,type);
        paint(x+1,y,type);
        paint(x,y-1,type);
        paint(x,y+1,type);
    }
}

int main(void){
    int h,w,i,j,ans;
    char str[110];
    scanf("%d%d",&h,&w);

    while(h!=0 || w!=0){
        ans=0;
        for(i=0; i<=h+1; i++){
            for(j=0; j<=w+1; j++){
                map[i][j]=0;
            }
        }
        for(i=1; i<=h; i++){
            scanf("%s",str);
            for(j=0; j<w; j++){
                if(str[j]=='@'){
                    map[i][j+1]=1;
                }else if(str[j]=='#'){
                    map[i][j+1]=2;
                }else if(str[j]=='*'){
                    map[i][j+1]=3;
                }
            }
        }
        for(i=1; i<=h; i++){
            for(j=1; j<=w; j++){
                if(map[i][j]!=0){
                    paint(i,j,map[i][j]);
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
        scanf("%d%d",&h,&w);
    }
    return 0;
}