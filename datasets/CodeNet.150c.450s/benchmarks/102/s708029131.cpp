#include<bits/stdc++.h>
using namespace std;
int W,H;
char fld[20][21];
const int dx[]={-1,0,1,0};
const int dy[]={0,-1,0,1};
bool used[20][20];
int rec(int y,int x){
    if(fld[y][x]!='.'||used[y][x])return 0;
    used[y][x]=true;
    int ret=0;
    for(int i=0;i<4;i++){
        int ty=y+dy[i],tx=x+dx[i];
        if(ty<0||ty>=H||tx<0||tx>=W)continue;
        ret+=rec(ty,tx);
    }
    return ret+1;
}
int main(){
    while(cin>>W>>H,W||H){
        fill_n(*used,400,false);
        for(int i=0;i<H;i++)cin>>fld[i];

        int sy,sx;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(fld[i][j]!='@')continue;
                sy=i;
                sx=j;
                fld[i][j]='.';
            }
        }

        cout<<rec(sy,sx)<<endl;
    }
    return 0;
}