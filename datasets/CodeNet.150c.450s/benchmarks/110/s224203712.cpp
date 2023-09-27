#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <bitset>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <numeric>
#define INF 2000000000
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
long long gcd(long long a,long long b){if(a%b==0){return b;}else return gcd(b,a%b);}
long long lcm(long long a,long long b){if(a==0){return b;} return a/gcd(a,b)*b;}
long long MOD; template<class T> void mod(T &n){MOD=n;}
#define sym cout<<"---------"<<endl;
#define ll long long
#define PL pair<long long, long long>
#define P pair<int,int>
#define mk make_pair
#define en endl
#define WHITE 1
#define BLACK 2
#define GRAY 1
#define RE return 0
#define int ll

#define MAX 1005
int field[MAX][MAX];  // start -2  空き地 0 障害物 -1
P num[15];
int dist[MAX][MAX];

signed main(){
  int h,w,n;
  cin>>h>>w>>n;
  
  P start;
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      char ch; cin>>ch;
      if(ch=='S') {start.first=j; start.second=i; field[i][j]=-2;}
      else if(ch=='.') field[i][j]=0;
      else if(ch=='X') field[i][j]=-1;
      else{ num[ch-'0'].first=j; num[ch-'0'].second=i; }
    }
  }
  
  int sum_time=0;
  for(int i=0; i<n; i++){
    int to=i+1;
    P now_where;
    if(!i){
      now_where.first=start.first;
      now_where.second=start.second;
    }else{
      now_where.first=num[i].first;
      now_where.second=num[i].second;
    }
    
    for(int i=0; i<=w; i++) for(int j=0; j<=h; j++) dist[i][j]=INF;
    dist[now_where.first][now_where.second]=0;
    
    int min_dist=INF;
    queue<P> que;
    que.push(mk(now_where.first,now_where.second));
    while(!que.empty()){
      int x=que.front().first; int y=que.front().second; que.pop();
      if(num[to].first==x&&num[to].second==y){
        min_dist=dist[x][y];
        break;
      }
      for(int k=0; k<4; k++){
        int xx=x+dx[k]; int yy=y+dy[k];
        if(xx<1||xx>w||yy<1||yy>h) continue;
        if(field[yy][xx]==-1) continue;
        if(dist[xx][yy]>dist[x][y]+1){
          dist[xx][yy]=dist[x][y]+1;
          que.push(mk(xx,yy));
        }
      }
    }
    
    sum_time+=min_dist;
  }
  
  cout<<sum_time<<en;
}



