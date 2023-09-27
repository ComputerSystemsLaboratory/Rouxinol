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
    int n,m;
    cin >> n >> m;
    if(n==0) return 0;
    int ans=0;
    vector<int> a(11,0);
    int d,p;
    for(int i=0;i<n;i++){
      cin >> d >> p;
      a[p]+=d;
    }
    int tmp;
    for(int i=10;i>0;i--){
      tmp=min(m,a[i]);
      a[i]-=tmp;
      m-=tmp;
    }
    for(int i=0;i<=10;i++){
      ans+=i*a[i];
    }
    cout << ans << endl;
  }
  return 0;
}

