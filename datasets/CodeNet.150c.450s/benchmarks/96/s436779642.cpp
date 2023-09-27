#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
typedef complex<double> P;

int main() {
  string s[10];
  s[1] = ".,!? ";
  s[2] = "abc";
  s[3] = "def";
  s[4] = "ghi";
  s[5] = "jkl";
  s[6] = "mno";
  s[7] = "pqrs";
  s[8] = "tuv";
  s[9] = "wxyz";
  int T; cin >>T;
  REP(t, T){
    string str; cin >>str;
    int num = -1, cnt = -1;
    REP(i, str.length()){
      int n = str[i] - '0';
      if(n == 0){
        if(cnt != -1){
          cout <<s[num][cnt % (int)s[num].length()];
          cnt = -1;
          num = -1;
        }
      } else{
        if(num == -1) num = n;
        ++cnt;
      }
    }
    cout <<endl;
  }
  return 0;
}