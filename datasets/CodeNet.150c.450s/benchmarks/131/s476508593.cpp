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

int getSmall(int n, int d){
  int a[10];
  rep(i,10)a[i]=0;

  while(n>0){
    a[n%10]++;
    n/=10;
  }

  int res=0;
  repl(i,1,10){
    rep(j,a[i]){
      res = res*10 + i;
    }
  }
  return res;
}

int getLarge(int n, int d){
  int a[10];
  rep(i,10)a[i]=0;

  rep(i,d){
    a[n%10]++;
    n/=10;
  }

  int res=0;
  rep(i,10){
    rep(j,a[9-i]){
      res = res*10 + 9-i;
    }
  }
  return res;
}

int main(){
  while(true){
    int n,d;
    cin>>n>>d;
    if(n==0 && d==0) break;

    int a[100];
    a[0]=n;
    int idx=0;
    bool nxt=true;
    while(nxt){
      a[idx+1]=getLarge(a[idx],d) - getSmall(a[idx],d);
      idx++;
      rep(i,idx){
	if(a[i]==a[idx]){
	  printf("%d %d %d\n", i, a[idx], idx-i);
	  nxt=false;
	  break;
	}
      }
    }
  }
}