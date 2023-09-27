#include <bits/stdc++.h>

using namespace std;
using ll=long long;

#define RREP(i,m,n) for(int i=(int)(m);i>=(int)(n);--i)
#define rrep(i,m) RREP(i,m,0)
#define REP(i,m,n) for(int i=(int)(m);i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
const int MOD=1e9+7;

template<typename T>
void fail(T v){cout << v << endl;exit(0);}

void solve(){
  while(true){
    int a,b;
    cin >> a >> b;
    if(!(a|b))break;
    int len=a*a+b*b;
    int min=1000000,h=-1,w=-1;
    REP(i,1,150)
      REP(j,i+1,150){
        int dif=(i*i+j*j)-len;
        if(dif<0||(i==a&&j==b))continue;
        if((dif|min)&&dif<min){
          if(!dif&&i<=a)continue;
          min=dif;
          h=i;w=j;
        }
      }
    cout << h << " " << w << endl;
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}

