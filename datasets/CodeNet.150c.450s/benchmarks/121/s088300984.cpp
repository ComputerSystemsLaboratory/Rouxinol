#include <iostream>
using namespace std;

int A[200][200];
int w,h;

bool input()
{
    cin>>h>>w;
    if(!h&&!w)return false;
    char tmp;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>tmp;
            if(tmp=='#')A[i][j]=0;
            if(tmp=='*')A[i][j]=1;
            if(tmp=='@')A[i][j]=2;
        }
    }
    return true;
}

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dfs(int x, int y, int valid)
{
    if(A[x][y]==valid)A[x][y] = -1;
    else return;
    int nx, ny;
    for(int i=0;i<4;i++){
        nx = x+dx[i];
        ny = y+dy[i];
        if(0<=nx&&nx<h && 0<=ny&&ny<w){
            dfs(nx, ny, valid);
        }
    }
}

int solve()
{
    int res=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(A[i][j]!=-1){
                dfs(i, j, A[i][j]);
                res++;
            }
        }
    }
    return res;
}

int main()
{
    while(input()){
        cout<<solve()<<endl;
    }
    return 0;
}

