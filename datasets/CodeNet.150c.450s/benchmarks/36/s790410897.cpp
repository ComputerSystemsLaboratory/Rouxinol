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
  int num,ans;
  while(cin >> num){
    ans = 0 ;
    for(int i = 0; i < 600;i+=num){
      ans += i*i*num ;
    }
    cout << ans << endl ;
  }
  return 0;
}