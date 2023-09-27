#include <utility>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int cnt;
int t[3]={-1,0,1};
    int map[55][55];
void dfs(int h,int w){
    if(map[h][w]==1){
        map[h][w]=0;
        for(int i=0;i<3;i++){for(int j=0;j<3;j++)dfs(h+t[i],w+t[j]);}
       }
}
int main()
{
    int w,h;

    while(cin>>w>>h,w+h){cnt=0;
        for(int i=0;i<55;i++){for(int j=0;j<55;j++)map[i][j]=0;}
        for(int i=0;i<h;i++){for(int j=0;j<w;j++)scanf("%d",&map[i+1][j+1]);}
        for(int i=0;i<53;i++){for(int j=0;j<53;j++){
            if(map[i][j]==1)cnt++;
            dfs(i,j);}}
        cout<<cnt<<endl;}
    return 0;
}