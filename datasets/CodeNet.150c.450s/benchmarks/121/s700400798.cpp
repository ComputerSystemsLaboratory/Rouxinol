#include <iostream>
#include <cstdio>
using namespace std;

const int dx[]={1,-1,0,0};
const int dy[]={0,0,1,-1};

const int maxn =100+10;

int H,W;
char field[maxn][maxn];

void dfs(int x,int y,char tree){
    field[x][y]='.';

    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx>=0&&nx<H&&ny>=0&&ny<W&&field[nx][ny]==tree){
            dfs(nx,ny,tree);
        }
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>H>>W&&H&&W){
        for(int i=0;i<H;i++){
            cin>>field[i];
        }

        int cnt=0;

        for(int x=0;x<H;x++){
            for(int  y=0;y<W;y++){
                if(field[x][y]!='.'){
                    dfs(x,y,field[x][y]);
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}