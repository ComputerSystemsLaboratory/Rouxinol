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
  int i, mlen = 0, mdeta = 0, deta = 0, len = 0, leni,j, detai;
  string str;
  vector<string> data;

  while(cin >> str) data.push_back(str);

  rep(i,data.size()){
    deta = 0;
    rep(j,data.size()){
      if(data[i] == data[j]) deta++;
      len = data[i].size();
      if(mlen < len){
        mlen = len;
        leni = i;
      }
      if(mdeta < deta){
        mdeta = deta;
        detai = i;
      }
    }
  }

  cout << data[detai] << " " << data[leni] << endl;

  return 0;
}