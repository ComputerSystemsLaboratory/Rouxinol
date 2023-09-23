#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000
#define R_MAX 10
#define C_MAX 10000

bool f[R_MAX][C_MAX];
int cn[C_MAX];
int r,c;

int main(){

  while(true){
    cin >> r >> c;
    if(r==0 && c==0) break;

    rep(i,r){
      rep(j,c){
	int d;
	scanf("%d", &d);
	if(d==0) f[i][j]=true;
	else f[i][j]=false;
      }
    }

    int ans=0;

    rep(n,1<<r){
      fill(cn, cn+c, 0);
      rep(i,r){
	if((n>>i)%2){
	  rep(j,c){
	    if(f[i][j]) cn[j]++;
	  }
	}
	else {
	  rep(j,c){
	    if(!f[i][j]) cn[j]++;
	  }
	}
      }

      int tmp=0;
      rep(i,c){
	tmp += max(cn[i], r-cn[i]);
      }
      ans = max(ans, tmp);
    }

    cout << ans << endl;

  }

}