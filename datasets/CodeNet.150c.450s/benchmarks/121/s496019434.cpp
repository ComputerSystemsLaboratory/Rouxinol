//
// Created by jchen on 18-7-4.
//　　aoj　0118 深度优先搜索

//给一个三种字母组成的区域,判断有多少个区域
#include <iostream>

#define MAX_H 100
#define MAX_W 100

using namespace std;

int h, w;

char field[MAX_H][MAX_W];

int a[4][2] = {
        0, 1,
        0, -1,
        1, 0,
        -1, 0
};

void dfs(int x, int y, char t) {
    field[x][y]='a';
    for(int i=0;i<4;i++){
        int nx=x+a[i][0];
        int ny=y+a[i][1];

        if(nx>=0&&ny>=0&&nx<h&&ny<w&&field[nx][ny]==t){
            dfs(nx,ny,t);
        }
    }
}
//遍历过的部分全都换成'a'
int main(){

    while (cin>>h>>w){
        int res=0;
        if(h==0&&w==0)
            break;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>field[i][j];
            }
        }

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(field[i][j]!='a'){
                    res++;
                    dfs(i,j,field[i][j]);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}





