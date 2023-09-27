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

int main(){
  int i;
  vector<int> in(5);

  rep(i,5) cin >> in[i];
  sort(in.begin(), in.end(), greater<int>());
  rep(i,4) cout << in[i] << " ";
  cout << in[4] << endl;

  return 0;
}