#include<stdio.h>
#include<string.h>

int answer,w,h;
char c[21][21];

void move(int x,int y){
    if(c[x][y]!='#'){
        answer++;
        c[x][y]='#';
        if(x-1>=0) move(x-1,y);
        if(x+1<h) move(x+1,y);
        if(y-1>=0) move(x,y-1);
        if(y+1<w) move(x,y+1);
    }
}

int main(){
    while(1){
        int x,y;
        answer=0;
        scanf("%d %d",&w,&h);
        if(w==0&&h==0) return 0;
        getchar();
        for(int i=0;i<h;i++){
            for(int j=0;j<=w;j++){
                scanf("%c",&c[i][j]);
                if(c[i][j]=='@'){
                    x=i;
                    y=j;
                }
            }
        }
        move(x,y);
        printf("%d\n",answer);
    }
}