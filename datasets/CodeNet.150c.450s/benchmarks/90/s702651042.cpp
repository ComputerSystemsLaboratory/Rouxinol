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
#define gsort(st,en) sort((st),(en),greater<int>())

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
  cin.tie(0);
  ios::sync_with_stdio(false);
  int num,max;
  vi tmp(101,0);
  while(cin >> num){
    ++tmp[num] ;
  }
  max = *max_element(all(tmp)) ;
  rep(i,101){
    if(tmp[i] == max){
      cout << i << endl ;
    }
  }
  return 0;
}