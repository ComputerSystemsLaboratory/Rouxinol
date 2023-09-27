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

constexpr int IMAX = ((1<<30)-1)*2+1 ;
constexpr int INF = 100000000;
double EPS = 1e-10 ;

int main(){
  int hit,blow,w,x,y,z;
  vi a(4,0),b(4,0) ;
  while(cin >> w >> x >> y >> z){
    hit = 0,blow = 0;
    a[0] = w,a[1] = x,a[2] = y,a[3] = z ;
    for(int i =0; i < 4; ++i){
      cin >> x ;
      b[i] = x ;
    }
    rep(i,4){
      rep(j,4){
        if(a[i] == b[j] && i == j){
          ++hit ;
        }
        else if(a[i] == b[j]){
          ++blow ;
        }
      }
    }
    cout << hit << " " << blow << endl ;
  }
  return 0;
}