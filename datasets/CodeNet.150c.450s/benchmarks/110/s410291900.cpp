#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
#define MAXN 1001
char A[MAXN][MAXN];
int w,h,n;
int s[2];

void input()
{
    cin>>h>>w>>n;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>A[i][j];
            if(A[i][j]=='S'){
                s[0]=i;
                s[1]=j;
            }
        }
    }
}

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
typedef pair<pair<int,int>,int> P;

int known[MAXN][MAXN];

int bfs(int& x, int& y, char k)
{
    queue<P>que;
    que.push(P(make_pair(x, y), 0));
    while(!que.empty()){
        P cur = que.front();
        // cout<<"*"<<cur.first.first<<" "<<cur.first.second<<endl;
        que.pop();
        if(A[cur.first.first][cur.first.second]==k){
            x = cur.first.first;
            y = cur.first.second;
            return cur.second;
        }
        for(int i=0;i<4;i++){
            int nx = cur.first.first+dx[i];
            int ny = cur.first.second+dy[i];
            if(0<=nx&&nx<h && 0<=ny&&ny<w && A[nx][ny]!='X' && !known[nx][ny]){
                que.push(P(make_pair(nx, ny), cur.second+1));
                known[nx][ny]=1;
            }
        }
    }
    return 0x3fffffff;
}

int main()
{
    input();
    int res = 0;
    int x, y;
    x = s[0];
    y = s[1];

    for(int i=1;i<=n;i++){
        memset(known, 0, sizeof(int)*MAXN*MAXN);
        int tmp = bfs(x, y, '0'+i);
        res += tmp;
    }
    cout<<res<<endl;
    return 0;
}


