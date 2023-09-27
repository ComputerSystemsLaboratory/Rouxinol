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
  int n,m;
  int x,y;
  int i,j;

  while(true){
    cin>>n;
    if(n==0)break;

    int grid[25][25]={};
    rep(i,n){
      cin>>x>>y;
      grid[y][x]++;
    }
    scanf("%d\n",&m);
    x=10;
    y=10;
    rep(i,m){
      char d;
      int l;
      scanf("%c %d\n",&d,&l);
 
      if(d=='N'){
	for(j=y;j<=y+l;j++)
	  grid[j][x]=0;
	y=y+l;
      }else if(d=='S'){
	for(j=y;j>=y-l;j--)
	  grid[j][x]=0;
	y=y-l;
      }else if(d=='E'){
	for(j=x;j<=x+l;j++)
	  grid[y][j]=0;
	x=x+l;
      }else if(d=='W'){
	for(j=x;j>=x-l;j--)
	  grid[y][j]=0;
	x=x-l;
      }
    }

    int ans=0;
    rep(i,23)rep(j,23)
      if(grid[i][j])
	ans++;
    if(ans)
      cout<<"No"<<endl;
    else
      cout<<"Yes"<<endl;
  }

}