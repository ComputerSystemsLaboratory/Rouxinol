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
    int m,nmi,nma;
    cin >> m >> nmi >> nma;
    if(m==0) return 0;
    vector<int> a(m);
    for(int i=0;i<m;i++) cin >> a[i];
    sort(all(a),greater<int>());
    int ans=0,k=0;
    for(int i=nmi-1;i<=nma-1;i++){
      if(ans<=a[i]-a[i+1]){
        ans=a[i]-a[i+1];
        k=i;
        // cout << ans << endl;
      }
    }
    cout << k+1 << endl;
  }
  return 0;
}

