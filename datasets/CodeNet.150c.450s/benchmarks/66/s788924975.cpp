#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cassert>
#include <string>
#include <memory.h>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <cctype>
#include <iomanip>
#include <sstream>
#include <cctype>
#include <fstream>
#include <cmath>
using namespace std;

#define REP2(i, m, n) for(int i = (int)(m); i < (int)(n); i++)
#define REP(i, n) REP2(i, 0, n)
#define ALL(c) (c).begin(), (c).end()
#define ITER(c) __typeof((c).begin())
#define PB(e) push_back(e)
#define FOREACH(i, c) for(ITER(c) i = (c).begin(); i != (c).end(); ++i)
#define MP(a, b) make_pair(a, b)
#define PARITY(n) ((n) & 1)

typedef long long ll;
typedef pair<ll, ll> P;
const int INF = 1000 * 1000 * 1000 + 7;
const double EPS = 1e-10;

bool locked;
set<string> registered;

int main(){
  int n, m;
  string str;
  cin >> n;
  locked = true;
  for(int i = 0; i < n; i++){
    cin >> str;
    registered.insert(str);
  }
  cin  >> m;
  for(int j = 0; j < m; j++){
    cin >> str;
    if(registered.count(str) > 0){
      if(locked){
        locked = false;
        cout << "Opened by " << str << endl;
      }else{
        locked = true;
        cout << "Closed by " << str << endl;
      }
    }else{
      cout << "Unknown " << str << endl;
    }
  }
  return 0;
}