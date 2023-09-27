#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int w,h;
  int vx[4]={1,0,-1,0};
  int vy[4]={0,-1,0,1};
  while(cin>>w>>h,h+w){
    string str[h];
    for(int i=0;i<h;i++)cin>>str[i];
    bool Map[h][w];
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	Map[i][j]=false;
    queue<pair<int,int> >que;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(str[i][j]=='@'){
	  que.push(mp(i,j));
	  Map[i][j]=true;
	}
      }
    }
    while(!que.empty()){
      pair<int,int>now=que.front();
      que.pop();
      //cout<<now.F<<" "<<now.S<<endl;
      for(int i=0;i<4;i++){
	if(now.S+vy[i]>=0&&now.S+vy[i]<w&&now.F+vx[i]>=0&&now.F+vx[i]<h&&(!Map[now.F+vx[i]][now.S+vy[i]])&&str[now.F+vx[i]][now.S+vy[i]]=='.'){
	  Map[now.F+vx[i]][now.S+vy[i]]=true;
	  que.push(mp(now.F+vx[i],now.S+vy[i]));
	}
      }
    }
    ll ans=0;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	if(Map[i][j])
	  ans++;
    cout<<ans<<endl;
  }
  return 0;
}