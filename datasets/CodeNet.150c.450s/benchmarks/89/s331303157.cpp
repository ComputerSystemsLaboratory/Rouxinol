//suhan lee,saitama university

#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <ctime>
#include <climits>
#include <cassert>
#include <complex>
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define repn(i,n) for(int i=0;i<n;i++)
#define EACH(t,i,c) for(t::iterator i=(c).begin(); i!=(c).end(); ++i)
#define pb push_back 
#define pf push_front

int main(){
  int a,d,n;
  vi table(1000000,1);
  table[1]=0;
  table[0]=0;
  for(int i=2;i<1000000;i++){
    if(table[i]==0) continue;
    for(int j=i*2;j<1000000;j+=i){
      table[j]=0;
    }
  }
  while(true){
    cin>>a>>d>>n;
    if(a==0&&d==0&&n==0) break;
    while(1){
      if(table[a]==1) n-- ;
      if(n==0) break;
      a+=d;
    }     
    cout <<a<<endl;
      
    
  }
  return 0;
}