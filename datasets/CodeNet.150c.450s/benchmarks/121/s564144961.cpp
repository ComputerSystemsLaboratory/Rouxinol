#include<stdio.h>
#include<iostream>
#include<string.h>

int H,W;
char map[200][200];
void flood(int typ, int x,int y){
    if(x<0||x>W||y<0||y>H||map[y][x]!=typ)return;
    map[y][x]='X';
    flood(typ,x,y-1); flood(typ,x+1,y); flood(typ,x,y+1); flood(typ,x-1,y);
}
int main(){
    while(scanf("%d%d",&H,&W)!=EOF){if(H==0&&W==0)return 0;
        for(int i=0;i<H;i++)scanf("%s",&map[i]);
        int count=0;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(map[i][j]!='X'){flood(map[i][j],j,i);count++;}
            }
        }printf("%d\n",count);
    }return 0;
}