#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>

using namespace std;

int mh[] = {0,1,0,-1};
int mw[] = {1,0,-1,0};
int H,W;
char Map[102][102];
bool check[102][102];
void dfs(int h,int w,char c){
    for(int i = 0;i < 4;i++){
        int movew = mw[i] + w;
        int moveh = mh[i] + h;
        if(movew >= 0 && moveh >= 0
           && movew < W && moveh < H){
            if(Map[moveh][movew] == c && check[moveh][movew] == false){
                check[moveh][movew] = true;
                dfs(moveh,movew,c);
            }
        }
    }
}
int main(){
    while(true){
        scanf("%d %d",&H,&W);
        if(H+W == 0)break;
        for(int i = 0;i < 102;i++){
            for(int j = 0;j < 102;j++){
                check[i][j] = false;
            }
        }
        for(int i = 0;i < H;i++){
            for(int j = 0;j < W;j++){
                char c;
                do { c=getchar(); } while (c!='@' && c!='#' && c!='*');
                Map[i][j] = c;
            }
        }
//        for(int i = 0;i < H;i++){
//            for(int j = 0;j < W;j++){
//                printf("%c",Map[i][j]);
//            }
//            printf("\n");
//        }
        int cnt = 0;
        for(int i = 0;i < H;i++){
            for(int j = 0;j < W;j++){
                if(!check[i][j]){
                    check[i][j] = true;
                    dfs(i,j,Map[i][j]);
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}