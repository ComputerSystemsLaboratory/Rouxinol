#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<bitset>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;

#define REP(i,n) for(int i=0;i<int(n);i++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
typedef long long ll;
typedef pair<int,int> P;

int L[55][55];
int w,h;
bool inside(int i,int j){
	return (1<=i && i<=h && 1<=j && j<=w);
}

int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};

void dfs(int i,int j){
	L[i][j]=0;
    REP(k,8){
    int x=i+dx[k],y=j+dy[k];
	if(inside(x,y)){
		if(L[x][y]==1) dfs(x,y);
	}
    }
}

int main(){
	  int i,j;

	  while(1){
		  cin >> w >> h;
		  if(w==0 && h==0) break;
		  for(i=1;i<=h;i++) for(j=1;j<=w;j++) cin >> L[i][j];

		  int ans=0;
		  for(i=1;i<=h;i++) for(j=1;j<=w;j++){
			  if(L[i][j]==1){
				  ans++;
				  dfs(i,j);
			  }
		  }

		  cout << ans << endl;

	  }

	  return 0;
}

