#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<map>

using namespace std ;

#define pb(n) push_back(n)
#define fi first
#define se second
#define all(r) (r).begin(),(r).end()
#define gsort(st,en) sort((st),(en),greater<int>())
#define vmax(ary) *max_element(all(ary))
#define debug(x) cout<<#x<<": "<<x<<endl

#define rep(i,n) for(int i = 0; i < (n);++i)
#define repc(i,a,b) for(int i = (a);i <(b);++i)
#define repa(n,array) for(auto n :(array))

long long typedef ll ;
typedef vector<int> vi ;
typedef vector<ll> vl ;
//template<class Value>
//using dict = std::map< string, Value >;
typedef map<string,int> dict ;

constexpr int IMAX = ((1<<30)-1)*2+1 ;
constexpr int INF = 100000000;
double EPS = 1e-10 ;

typedef const pair<string, int> PSI;
bool cmpCount(PSI &T1, PSI &T2) {
    return T1.second < T2.second;
}

bool cmpLength(PSI &T1, PSI &T2) {
    return T1.first.length() < T2.first.length();
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  string str ;
  dict M;
  while(cin >> str){
    if(M.count(str) == 0){
      M[str] = 0 ;
    }
    else{
      auto it = M.find(str) ;
      ++it->se ;
    }
  }
  PSI maxCount = *max_element(M.begin(), M.end(), cmpCount);
  PSI maxLength = *max_element(M.begin(), M.end(), cmpLength);

  cout << maxCount.first << " " << maxLength.first << endl;
  return 0;
}