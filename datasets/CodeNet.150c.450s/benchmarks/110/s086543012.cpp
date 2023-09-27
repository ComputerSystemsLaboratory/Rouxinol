#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
#define MAX 1005

char JOI[MAX][MAX];
int h,w,n;
int dx[]={0,-1,0,1};
int dy[]={1,0,-1,0};

pair<int, int> goal[10];
bool check(int a,int b){
    return (a>=1&&a<=h&&b>=1&&b<=w);
}

int step[MAX][MAX];
int bfs(const pair<int, int>& st, const pair<int, int>& en){
    queue<pair<int,int> > q;
    q.push(st);
    memset(step, -1, sizeof(step));
    step[st.first][st.second]=0;
    int stp=0;
    while(!q.empty()){
        pair<int, int> S=q.front(); q.pop();
        int x=S.first;  int y=S.second;
        stp=step[x][y];
        for(int i=0; i<4; i++){
            int cx=x+dx[i]; int cy=y+dy[i];
            if(check(cx, cy)){
                if(JOI[cx][cy]!='X'&&step[cx][cy]==-1){
                    if(cx==en.first&&cy==en.second) return stp+1;
                    q.push(make_pair(cx, cy));
                    step[cx][cy]=stp+1;
                }
            }
        }
    }
}
int main(){
    cin>>h>>w>>n;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin>>JOI[i][j];
            if(JOI[i][j]=='S') goal[0]=make_pair(i, j);
            else if(JOI[i][j]>='0'&&JOI[i][j]<='9'){
                int x=JOI[i][j]-'0';
                goal[x]=make_pair(i, j);
            }
        }
    }
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=bfs(goal[i],goal[i+1]);
    }
    cout<<ans<<endl;
}