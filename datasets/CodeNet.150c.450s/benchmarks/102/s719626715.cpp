#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <ctime>
#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
/*---------------------------------------------------*/

char maze[22][22];
int sx,sy;

void make_maze(int w,int h){
  rep(i,22)rep(j,22)maze[i][j]='#';
  rep(i,h)rep(j,w){
    cin>>maze[i][j];
    if(maze[i][j]=='@'){sy=i;sx=j;}
  }
  //rep(i,22){rep(j,22)cout<<maze[i][j];cout<<endl;}
}

void solve(int w,int h){
  queue<int> que;
  int cnt=0;
  que.push(sx);que.push(sy);
  while(que.size()){
    int x=que.front();que.pop();
    int y=que.front();que.pop();
    rep(i,4){
      if(maze[y+dy[i]][x+dx[i]]=='.'&&0<=x+dx[i]&&x+dx[i]<w&&0<=y+dy[i]&&y+dy[i]<h){
	cnt++;
	que.push(x+dx[i]);que.push(y+dy[i]);
	maze[y+dy[i]][x+dx[i]]='#';
      }
    }
  }
  cout<<cnt+1<<endl;
}

int main(){
  int w,h;
  while(cin>>w>>h){
    if(w==0&&h==0)break;
    make_maze(w,h);
    solve(w,h);
  }
}