#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000

int mat[10][5];

int main(){
  int h;
  while(scanf("%d", &h), h){
    rep(i,h)
      rep(j,5)
      scanf("%d", &mat[i][j]);

    int res=0;
    while(true){
      // remove stones
      bool changed=false;
      rep(i,h){
	int base=mat[i][2];
	if(base<=0) continue;
	int idx=0;
	while(idx<5){
	  if(mat[i][idx]!=base){idx++; continue;}
	  int cnt=0;
	  while(idx<5 && mat[i][idx]==base){ idx++; cnt++; }
	  if(cnt>=3){
	    changed=true;
	    res += base*cnt;
	    rep(k,cnt) mat[i][idx-k-1]=0;
	    break;
	  }
	}
      }

      if(!changed) break;

      // drop stones
      rep(i,5){
	int height=h-1;
	while(height>0){
	  bool flg=false;
	  if(mat[height][i]<=0){
	    for(int tmp=height; tmp>0; tmp--){
	      mat[tmp][i]=mat[tmp-1][i];
	      if(mat[tmp-1][i]>0) flg=true;
	    }
	    mat[0][i]=0;
	  }
	  if(mat[height][i]!=0 || !flg) height--;
	}// for
      }// rep
    }

    cout<<res<<endl;

  }
  return 0;
}