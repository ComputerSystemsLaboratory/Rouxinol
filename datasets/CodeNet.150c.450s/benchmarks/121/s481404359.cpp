#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char S[105][105];
int xx[]={0,-1,0,1};
int yy[]={-1,0,1,0};
int N,M;
void dfs(int x,int y,char temp_c){
    int i,j,temp_x,temp_y;
    S[x][y]='.';
    for(i=0;i<4;i++)
    for(j=0;j<4;j++){
        temp_x=x+xx[i];
        temp_y=y+yy[i];
        if(S[temp_x][temp_y]!=temp_c||temp_x<0||temp_x>=N||temp_y<0||temp_y>=M)
        continue;
        dfs(temp_x,temp_y,temp_c);
    }
}
int main(){
    int i,j,sum;
    while(cin>>N>>M&&(N||M)){
        sum=0;
        for(i=0;i<N;i++)
        for(j=0;j<M;j++)
        cin>>S[i][j];
        for(i=0;i<N;i++)
        for(j=0;j<M;j++)
        if(S[i][j]!='.'){
        dfs(i,j,S[i][j]);
        sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}