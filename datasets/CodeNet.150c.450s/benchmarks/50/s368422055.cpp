#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<map>
#include<vector>
#include<queue>
#include<set>
#include<numeric>

using namespace std ;

#define pb(n) push_back(n)
#define fi first
#define se second
#define np string::npos
#define all(r) (r).begin(),(r).end()
#define gsort(st,en) sort((st),(en),greater<int>())
#define vmax(ary) *max_element(all(ary))
#define vmin(ary) *min_element(all(ary))
#define debug(x) cout<<#x<<": "<<x<<endl

#define rep(i,n) for(int i = 0; i < (int)(n);++i)
#define repc(i,a,b) for(int i = (a);i < (int)(b);++i)
#define repi(it,array) for(auto it = array.begin(),end = array.end(); it != end;++it)
#define repa(n,array) for(auto n :(array))

double eps = 1e-10 ;

  template <typename T>
void out(vector < T > v)
{
  for(size_t i = 0; i < v.size(); i++)
  {
    debug(v[i]);
  }
}

template<typename T>
string ntos( T i ) {
  ostringstream s ;
  s << i ;
  return s.str() ;
}

template<typename T>
T ston(string str, T n){
  istringstream sin(str) ;
  T num ;
  sin >> num ;
  return num ;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,ans = 0;
  while(1){
    cin >> n;
    if(n == 0){
      break ;
    }
    n = 1000-n;
    while(n >= 500){
      n -= 500;
      ++ans;
    }
    while(n >= 100){
      ++ans;
      n -= 100;
    }
    while(n >= 50){
      n -= 50;
      ++ans;
    }
    while(n >= 10){
      ++ans;
      n -= 10;
    }
    while(n >= 5){
      n -= 5;
      ++ans;
    }
    while(n >= 1){
      n -= 1;
      ++ans;
    }
    cout << ans<< endl;
    ans = 0;
  }
  return 0;
}