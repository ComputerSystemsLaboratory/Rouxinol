#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <stack>
#include <queue>
#include <numeric>
#include <cstring>

using namespace std;

#define REP(i, a, b) for(i = a; i < b; i++)
#define rep(i, n) REP(i, 0, n)

int main(){
  int m;

  cin >> m;

  while(m--){
    set<string> s;
    string src;
    cin >> src;
    
    int i, n = src.size();
    
    rep(i, n){
      int j, k;
      string str, str1, str2;
      
      rep(j, i) str1 += src[j];
      REP(k, i, n) str2 += src[k];

      string rstr1 = str1, rstr2 = str2;
      
      reverse(rstr1.begin(), rstr1.end());
      reverse(rstr2.begin(), rstr2.end());

      str += str1;
      str += str2;
      s.insert(str);

      str = "";

      str += str2;
      str += str1;
      s.insert(str);

      str = "";

      str += str1;
      str += rstr2;
      s.insert(str);

      str = "";

      str += rstr2;
      str += str1;
      s.insert(str);

      str = "";

      str += rstr1;
      str += str2;
      s.insert(str);

      str = "";

      str += str2;
      str += rstr1;
      s.insert(str);

      str = "";

      str += rstr1;
      str += rstr2;
      s.insert(str);

      str = "";

      str += rstr2;
      str += rstr1;
      s.insert(str);
    }
    cout << s.size() << endl;
  }
  return 0;
}