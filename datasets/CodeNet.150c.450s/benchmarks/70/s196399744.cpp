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

const int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31} ;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int m,d,date = 3;
  while(1){
    date = 3 ;
    cin >> m >> d ;
    if(m == 0){
      break ;
    }
    for(int i = 0;i < m-1;++i){
      date += month[i] % 7 ;
    }
    date += d % 7 - 1 ;
    switch(date%7){
      case 0:
        cout << "Monday" << endl ;
        break;
      case 1:
        cout << "Tuesday" << endl ;
        break;
      case 2:
        cout << "Wednesday" << endl ;
        break;
      case 3:
        cout << "Thursday" << endl ;
        break;
      case 4:
        cout << "Friday" << endl ;
        break;
      case 5:
        cout << "Saturday" << endl ;
        break;
      case 6:
        cout << "Sunday" << endl ;
        break;
      default:
        break;
    }
  }
  return 0;
}