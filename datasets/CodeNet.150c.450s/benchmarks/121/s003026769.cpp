// 1.初始化相?数?
// 2.?取?入
// 3.遍?整个数?，判断?当前位置有没有?行?通性?理
//     1.如果已??理?，接着遍?
//     2.如果没有?理?，使用dfs???型做?通性?理，??通数加一
// 4.?出
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 105
int H,W;//行数和列数
int fruit[MAXN][MAXN];//水果的布局
#define STAR 0 //星号*
#define POUND 1 //井号#
#define AT 2 //符号@
int connect[MAXN][MAXN];//是否???通性?理

void init() {
    memset(fruit,0,sizeof(fruit));
    memset(connect,0,sizeof(connect));
}
void getInput() {
    char c;
    for(int i=0;i<H;i++) {
        c=getc(stdin);
        if(c=='\r') getc(stdin);
        for(int j=0;j<W;j++) {
            c=getc(stdin);
            if(c=='*') fruit[i][j]=STAR;
            else if(c=='#') fruit[i][j]=POUND;
            else if(c=='@') fruit[i][j]=AT;
        }
    }
}

void checkInput() {
    for(int i=0;i<H;i++) {
        for(int j=0;j<W;j++) {
            if(fruit[i][j]==STAR) printf("*");
            else if(fruit[i][j]==POUND) printf("#");
            else if(fruit[i][j]==AT) printf("@"); 
        }
        printf("\n");
    }
}

void dfs(int row,int col,int type) {
    if(row>0 && fruit[row-1][col]==type && connect[row-1][col]==0) {
        connect[row-1][col]=1;
        dfs(row-1,col,type);
    }
    if(col>0 && fruit[row][col-1]==type && connect[row][col-1]==0) {
        connect[row][col-1]=1;
        dfs(row,col-1,type);
    }
    if(row<H-1 && fruit[row+1][col]==type && connect[row+1][col]==0) {
        connect[row+1][col]=1;
        dfs(row+1,col,type);
    }
    if(col<W-1 && fruit[row][col+1]==type && connect[row][col+1]==0) {
        connect[row][col+1]=1;
        dfs(row,col+1,type);
    }
}

int main() {
#ifdef debug
    freopen("in.txt","r",stdin);
#endif
    while(scanf("%d %d",&H,&W)) {
        if(H==0 && W==0) break;
        init();
        getInput();
    #ifdef debug   
        // checkInput();
    #endif
        int num=0;
        for(int i=0;i<H;i++) {
            for(int j=0;j<W;j++) {
                if(connect[i][j]==0) {
                    connect[i][j]=1;
                    dfs(i,j,fruit[i][j]);
                    num++;
                }
            }
        }
        printf("%d\n",num);
    }
}