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
#define FIN 10000

int solve(){
  int n,a,b,c,x;
  cin>>n>>a>>b>>c>>x;
  if(n==0 && a==0 && b==0 && c==0 && x==0) return -2;

  vector<int> xi(n);
  rep(i,n){
    scanf("%d", &xi[i]);
  }

  int f=0; //frame
  rep(i,n){
    if(i==0 && xi[0]==x) continue;
    while(true){
      x = ((a*x)%c + b) % c;
      f++;
      if(f>FIN) return -1;
      if(xi[i]==x) break;
    }
  }
  return f;
}

int main(){

  while(true){
    int res=solve();
    if(res==-2)break;
    else cout << res << endl;
  }

}