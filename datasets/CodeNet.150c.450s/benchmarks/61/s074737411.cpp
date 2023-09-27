#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define abs(a) max((a),-(a))
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define repe(i,n) rep(i,(n)+1)
#define per(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define pere(i,n) rep(i,(n)+1)
#define all(x) (x).begin(),(x).end()
#define SP <<" "<<
#define RET return 0
#define MOD 1000000007
#define INF 1000000000000000000

typedef long long LL;
typedef long double LD;

int main(){
  while(1){
    int n,a,b,c,x;
    cin >> n >> a >> b >> c >> x;
    if(n==0) return 0;
    int ans=0;
    int y;
    for(int i=0;i<n;i++){
      cin >> y;
      while(x!=y&&ans<=10000){
        x=(a*x+b)%c;
        ans++;
      }
      x=(a*x+b)%c;
      ans++;
    }
    if(ans>10001){
      cout << -1 << endl;
      continue;
    }
    cout << ans-1 << endl;
  }
  return 0;
}

