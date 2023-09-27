#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdio>

using namespace std ;

#define pb(n) push_back(n)
#define fi first
#define se second
#define all(r) (r).begin(),(r).end()

#define rep(i,n) for(int i = 0; i < (n);++i)
#define repc(i,a,b) for(int i = (a);i <(b);++i)
#define repa(n,array) for(auto n :(array))

typedef long long ll ;
typedef vector<int> vi ;
typedef vector<ll> vl ;

const int IMAX = ((1<<30)-1)*2+1 ;
const int INF = 100000000;
double EPS = 1e-10 ;

int main(){
  char c;
  int w,n,a,b,num ;
  bool flag = true;
  cin >> w >> n;
  vi v(w,0),va,vb ;
  rep(i,n){
    cin >> a >> c >> b ;
    va.pb(a),vb.pb(b) ;
  }

  rep(i,w){
    num = i+1 ;
    rep(j,n){
      if(num == va[j]){
        num = vb[j];
      }
      else if(num == vb[j]){
        num = va[j];
      }
    }
    v[num-1] = i+1;
  }
  for(int i = 0;i < v.size();++i){
    cout << v[i] << endl;
  }
  return 0;
}