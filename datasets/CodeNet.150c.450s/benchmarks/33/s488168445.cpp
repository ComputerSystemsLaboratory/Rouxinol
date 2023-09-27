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

int exc2inc(int y, int p){
  return y*(100+p)/100;
}

int inc2exc(int y, int p){
  if( y*100%(100+p) == 0 )
    return y*100/(100+p);
  else{
    int tmp=y*100/(100+p);
    while(exc2inc(tmp+1,p) <= y){
      tmp++;
    }
    return tmp;
  }
}

int main(){

  while(true){
    int x,y,s;
    cin>>x>>y>>s;
    if(x==0&&y==0&&s==0)break;

    int ans=0;
    rep(i,s/2+1){
      if(i==0)continue;
      int tmp = inc2exc(s-exc2inc(i,x), x); //i and tmp are tax-excluded value
      if(exc2inc(i,x)+exc2inc(tmp,x) != s) continue;
      ans = max(ans, exc2inc(i,y)+exc2inc(tmp,y));
      //      dbg(i);dbg(y);
    }

    cout << ans << endl;
  }

}