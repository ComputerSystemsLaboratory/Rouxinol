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
    int h,w;
    cin >> h >> w;
    if(h==0) return 0;
    int ah=1,aw=10000;
    for(int i=1;i<=150;i++){
      for(int j=i+1;j<=150;j++){
        if(h*h+w*w<i*i+j*j||(h*h+w*w==i*i+j*j&&h<i)){
          if(ah*ah+aw*aw>i*i+j*j||(ah*ah+aw*aw==i*i+j*j&&ah>i)){
            ah=i,aw=j;
          }
        }
      }
    }
    cout << ah SP aw << endl;
  }
  return 0;
}

