#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
const int INF = 0x7fffffff;
using lll = long long;
using ull = unsigned long long;
using namespace std;


int main(){
  lll ii,jj,kk;
  vector<int> ret;

  int n;

  cin >> n;
  int ac,wa,tle,re;
  string tmp;
  ac = 0;
  wa = 0;
  tle = 0;
  re = 0;
  for(ii=0;ii<n;ii++){
    cin >> tmp;
    if(tmp == "AC"){
      ac++;
    }
    else if(tmp == "WA"){
      wa++;
    }
    else if(tmp == "TLE"){
      tle++;
    }
    else if(tmp == "RE"){
      re++;
    }
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x "  << re << endl;
  
  return 0;
}
