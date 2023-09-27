#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PA;
int main(){

  int h,w,n,a[11][2];
  char c[1001][1001];
  cin >> h >> w >> n;

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin >> c[i][j];
      if(c[i][j]>='1'&&c[i][j]<='9'){
	a[ c[i][j]-'0'][0] = j;
	a[ c[i][j]-'0'][1] = i;
      }
      if(c[i][j]=='S'){
	a[0][0] = j;
	a[0][1] = i;
      }
    }
  }

  int sum = 0,suji[1001][1001],flag=0;
  queue<PA> que;
  int dx[12] = {1,-1,0,0};
  int dy[12] = {0,0,1,-1};

  for(int i=0;i<n;i++){

    memset(suji,-1,sizeof(suji));
    que.push( PA(a[i][0],a[i][1]) );
    suji[ a[i][1] ][ a[i][0] ] = 0;
    while(!que.empty()){
      PA p = que.front();
      que.pop();
      
      for(int j=0;j<4;j++){
	int x = p.first + dx[j];
	int y = p.second + dy[j];

	if(x<0||y<0||x>=w||y>=h||suji[y][x]!=-1||c[y][x]=='X') continue;
	suji[y][x] = suji[p.second][p.first]+1;
	que.push( PA(x,y) );
      }
    }
    
    sum += suji[a[i+1][1]][a[i+1][0]];

  }

  cout << sum << endl;
  
  return (0);
}