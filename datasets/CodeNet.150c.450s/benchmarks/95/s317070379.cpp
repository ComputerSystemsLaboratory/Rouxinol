#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <memory>
#include <cstring>
#include <cassert>
#include <numeric>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cctype>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define REP2(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define REP(i, n) REP2(i, 0, n)
#define ALL(S) (S).begin(), (S).end()
typedef long long ll;

int main(){
  ios::sync_with_stdio(false);

  int n;
  while (cin >>n && n > 0){
    string move;

    int lpos[200];
    int rpos[200];
    int res = 0;
    

    lpos[0] = 0;
    rpos[0] = 0;
    
    REP(i, n){
      cin >> move;
      lpos[i + 1] = lpos[i];
      rpos[i + 1] = rpos[i];

      (move[0] == 'l' ? lpos[i + 1]  : rpos[i + 1]) = (move[1] == 'u');

      if (i > 0 && lpos[i + 1] == rpos[i + 1] && lpos[i - 1] == rpos[i - 1] && lpos[i + 1] != lpos[i - 1]){
        res++;
      }
    }
    cout << res << endl;

    
  }
  return 0;
}