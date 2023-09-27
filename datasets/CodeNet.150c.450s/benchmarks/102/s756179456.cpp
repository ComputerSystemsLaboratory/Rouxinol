#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
//#include<>
using namespace std;

typedef long long int64;
typedef int int32;
typedef char int8;
typedef int32 int__;
typedef pair<int,int> pii;
#define rep(i,j) for(int__ i=0;i<j;i++)
#define repeat(i,j,k) for(int__ i=(j);i<(k);i++)
#define repeat_eq(i,j,k) for(int__ i=(j);i<=(k);i++)
#define all(v) (v).begin(),(v).end()

const int INF=1<<30;//=10E10

int main()
{
  int w,h;
  while(cin>>w>>h && w && h){
    char tile[20][20];
    int fx,fy;
    rep(i,h)rep(j,w){
      cin>>tile[i][j];
      if(tile[i][j]=='@'){
	fx=j;fy=i;
      }
    }
    
    bool visited[20][20]={};
    stack<pii> p;
    int ans=0;
    p.push(pii(fy,fx));
    while(!p.empty()){
      pii now=p.top();p.pop();
      int nx=now.second,ny=now.first;
      if(!visited[ny][nx]){
	visited[ny][nx]=true;
	ans++;
	if(ny>0 && tile[ny-1][nx]=='.')p.push(pii(ny-1,nx));
	if(ny+1<h && tile[ny+1][nx]=='.')p.push(pii(ny+1,nx));
	if(nx>0 && tile[ny][nx-1]=='.')p.push(pii(ny,nx-1));
	if(nx+1<w && tile[ny][nx+1]=='.')p.push(pii(ny,nx+1));
      }
    }
    cout<<ans<<endl;
  }

  return 0;
}