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
  int dx[4]={0,1,0,-1};
  int dy[4]={1,0,-1,0};
  bool used[25][25];
  char c[25][25];

  while(1){

    cin>>w>>h;
    if(w==0 && h==0)break;

    int sum=1;
    rep(i,25)rep(j,25)
      used[i][j]=false;

    rep(i,h)
      scanf("%s",c[i]);

    queue<pii> q;
    rep(i,h)rep(j,w)
      if(c[i][j]=='@'){
	q.push(pii(i,j));//y,x
	used[i][j]=true;
	break;
      }

    while(q.size()){
      i=q.front().first;
      j=q.front().second;
      q.pop();
      rep(k,4){
	int y=i+dy[k];
	int x=j+dx[k];
	if(y>=0 && y<h && x>=0 && x<w && used[y][x]==false && c[y][x]=='.'){
	    q.push(pii(y,x));
	    used[y][x]=true;
	    sum++;
	  }
      }
    }

    cout<<sum<<endl;

  }
}