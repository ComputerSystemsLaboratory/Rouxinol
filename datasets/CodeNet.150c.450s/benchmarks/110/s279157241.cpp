
#include<iostream>
#include<cstdio>
#include<deque>
#include<algorithm>

using namespace std;

typedef pair<int,int>P;

const int maxn=1e3+5;
int inf=500;

int h,w,n,sx,sy;
char s[maxn][maxn];
int book[maxn][maxn],goal[10];
int Next[4][2]={{0,1},{1,0},{-1,0},{0,-1}};

int judge(int row,int col)
{
    if(row>=0&&row<h&&col>=0&&col<w){
        return 1;
    }
    return 0;
}

int bfs()
{
    int res=0;
    deque<P>q;
    for(int ci=0;ci<n;ci++){
        fill(book[0],book[0]+maxn*maxn,inf);
        q.push_back(P(sx,sy));
        book[sx][sy]=0;
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop_front();
            if((int)s[x][y]==49+ci){
                goal[ci]=book[x][y];
                sx=x;
                sy=y;
                break;
            }
            for(int i=0;i<4;i++){
                int nx=x+Next[i][0];
                int ny=y+Next[i][1];
                if(judge(nx,ny)&&s[nx][ny]!='X'&&book[nx][ny]==inf){
                    q.push_back(P(nx,ny));
                    book[nx][ny]=book[x][y]+1;
                }
            }
        }
        q.clear();
        res+=goal[ci];
    }
    return res;
}

int main()
{
    cin>>h>>w>>n;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>s[i][j];
            if(s[i][j]=='S'){
                sx=i;
                sy=j;
            }
        }
    }
    int goalnum=bfs();
    cout<<goalnum<<endl;
    return 0;
}

