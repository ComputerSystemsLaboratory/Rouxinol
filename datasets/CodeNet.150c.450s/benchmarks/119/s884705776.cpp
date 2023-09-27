#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000
#define SIZE 51

bool f[SIZE][SIZE]; //true=land (1)
int w,h;

void wfs(int i, int j){
  //width-first search
  int d[]={1,0,-1};
  rep(di,3){
    int ni=i+d[di];
    if(ni<0 || ni>=h) continue;
    rep(dj,3){
      int nj=j+d[dj];
      if(nj<0 || nj>=w) continue;
      if(f[ni][nj]){
	f[ni][nj]=false;
	wfs(ni,nj);
      }
    }
  }
}

int main(){
  while(true){
    cin >>w>>h;
    if(w==0&&h==0) break;
    
    rep(i,h){
      rep(j,w){
	int d;
	scanf("%d", &d);
	if(d==0) f[i][j]=false;
	else  f[i][j]=true; //1=land
      }
    }

    int ans=0;
    rep(i,h){
      rep(j,w){
	if(f[i][j]){
	  ans++;
	  wfs(i,j);
	}
      }
    }

    cout << ans << endl;

  }
}