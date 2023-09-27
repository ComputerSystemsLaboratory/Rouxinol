#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  string ch[10];
  ch[1] = ".,!? ";
  ch[2] = "abc";
  ch[3] = "def";
  ch[4] = "ghi";
  ch[5] = "jkl";
  ch[6] = "mno";
  ch[7] = "pqrs";
  ch[8] = "tuv";
  ch[9] = "wxyz";
  int n;
  cin>>n;
  string inp;
  while(n--){
    cin>>inp;
    REP(i,inp.size()){
      if(inp[i]=='0') continue;
      int count = inp.find("0",i) - i-1;
      int num = inp[i] - '0';
      putchar( ch[num][count%ch[num].size()] );
      i += count + 1;
    }
    cout<<endl;
  }
  return 0;
}