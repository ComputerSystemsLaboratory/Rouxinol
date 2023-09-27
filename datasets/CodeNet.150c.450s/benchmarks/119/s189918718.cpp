#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> pii;

int main()
{
  int i,j,k;
  int h,w;
  int dx[8]={0,1,0,-1,1,1,-1,-1};
  int dy[8]={1,0,-1,0,1,-1,1,-1};

  while(1){

    cin>>w>>h;
    if(w==0 && h==0)break;

    int sum=0;
    int c[55][55]={};

    for(i=1;i<=h;i++)for(j=1;j<=w;j++)cin>>c[i][j];

    while(1){

      queue<pii> q;
      rep(i,h+1)rep(j,w+1)
	if(c[i][j]==1)goto START;
      break;//????????????

    START :
      q.push(pii(i,j));//y,x
      sum++;
      
      while(q.size()){
	i=q.front().first;
	j=q.front().second;
	q.pop();
	c[i][j]=0;
	rep(k,8){
	  int y=i+dy[k];
	  int x=j+dx[k];
	  if(c[y][x]==1){
	    q.push(pii(y,x));
	    c[y][x]=0;
	  }
	}
      }

    }
    cout<<sum<<endl;

  }
}