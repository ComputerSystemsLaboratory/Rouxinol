#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
using namespace std;

char ma[1001][1001];
bool visited[1001][1001];
int h,w,n;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int sx,sy;
vector<pair<int,int> >vec(10);
queue<pair<pair<int,int>,int> >que;
int bfs(int d){
    while(que.size()){
        pair<pair<int,int>,int>q=que.front();
        que.pop();
        int x=q.first.first;
        int y=q.first.second;
        if(visited[y][x])continue;
        if(ma[y][x]-'0'==d){
            return q.second;
        }
        visited[y][x]=1;
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<w&&ny>=0&&ny<h&&ma[ny][nx]!='X'&&!visited[ny][nx]){
                que.push(make_pair(make_pair(nx, ny),q.second+1));
            }
        }
    }
    return 0;
}

int main(){
    cin>>h>>w>>n;
    for(int i=0;i<h;i++){
        string str;
        cin>>str;
        for(int j=0;j<w;j++){
            ma[i][j]=str[j];
            if(ma[i][j]>'0'&&ma[i][j]<='9'){
                vec[ma[i][j]-'0']=make_pair(j, i);
            }
            if(ma[i][j]=='S'){
                vec[0]=make_pair(j, i);
            }
        }
    }
    int c=0;
    for(int i=1;i<=n;i++){
        while(que.size())que.pop();
        memset(visited,0,sizeof(visited));
        que.push(make_pair(make_pair(vec[i-1].first,vec[i-1].second),0));
        c+=bfs(i);
    }
    cout<<c<<endl;
}