#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

#define FOR(i, a, b) for(int i=(int)a; i < (int)b; ++i)
#define REP(i, n) FOR(i,0,n)
#define RFOR(i, a, b) for(int i=(int)b-1; i >= (int)a; --i)
#define RREP(i, n) RFOR(i,0,n)
#define IN(a,x,b) (a<=x && x < b)
template<class T> inline void chmax(T& a, const T& b){if(a<b) a = b;}
template<class T> inline void chmin(T& a, const T& b){if(a>b) a = b;}

using namespace std;
using ll = long long;
template<class T> using V = std::vector<T>;
template<class T> using VV = V<V<T>>;

string s;
int N;

signed main(){
  while(cin>>s>>N){
    if(s=="0"&&N==0)break;
    vector<int>a(21);
    a[0] = stoll(s);
    REP(i,20){
      s = to_string(a[i]);
      int sz = s.size();
      REP(i,N-sz)s='0'+s;
      sort(s.begin(),s.end());
      int mi = stoll(s);
      reverse(s.begin(),s.end());
      int ma = stoll(s);
      a[i+1] = ma - mi;
      //cout<<a[i+1]<<endl;
    }

    int flg = 1;
    FOR(i,0,21){
      FOR(j,0,i){
        if(a[i] == a[j]){
          cout<<j<<" "<<a[i]<<" "<<i-j<<endl;
          flg = 0;
        }
        if(flg == 0)break;
      }
      if(flg == 0)break;
    }
  }
  return 0;
}

