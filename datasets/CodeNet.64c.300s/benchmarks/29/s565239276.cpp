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
    int e;
    cin >> e;
    if(e==0) return 0;
    int ans=1000000000;
    for(int i=0;i<=100;i++){
      for(int j=0;j<=1000;j++){
        if(e>=i*i*i+j*j) ans=min(ans,i+j+e-i*i*i-j*j);
      }
    }
    cout << ans << endl;
  }
  return 0;
}

