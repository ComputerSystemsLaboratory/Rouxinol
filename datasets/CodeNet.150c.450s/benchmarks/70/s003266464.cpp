#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define REP(i,a,b) for((i)=(a);(i)<(int)(b);(i)++)
#define rep(i,n) REP(i,0,n)
// BEGIN CUT HERE
#define foreach(itr,c) for(typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}
// END CUT HERE
const int INF = 1>>29;

int main(){
  int mon, day,st;
  vector<vector<int> > data(13, vector<int>(32, INF));
  string whatday[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

  st = 3;
  REP(mon,1,13) REP(day,1,32){
    if(mon == 2 && day == 30) break;
    if(mon == 4 || mon == 6 || mon == 9 || mon == 11) if(day == 31) break;
    data[mon][day] = st;
    st++; if(st == 7) st = 0;
  }

  while(cin >> mon >> day){
    if(day == 0 && mon == 0) break;
    cout << whatday[data[mon][day]] << endl;
  }

  return 0;
}