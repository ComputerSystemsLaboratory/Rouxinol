// Bowen Yu
// NYU - Progteam

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <complex>
#include <ctime>
#include <cassert>
#include <functional>

using namespace std;

typedef long long ll;
typedef vector<int> VI;
typedef pair<int, int> PII;

#define REP(i,s,t) for(int i=(s);i<(t);i++)
#define FILL(x,v) memset(x,v,sizeof(x))

const int INF = (int)1E9;
#define MAXN 100005

char str[MAXN];
int main() {
  int x, max = 0;
  set<int> maxS;
  map<int,int> m;
  while (cin >> x) {
    if ( m.find(x) == m.end() ) {
      m[x] = 1;
    } else {
      m[x] = m[x] + 1;
    }

    if (m[x] > max) {
      max = m[x];
      maxS.clear();
      maxS.insert(x);
    } else if (m[x] >= max) {
      maxS.insert(x);
    }
  }

  for (set<int>::iterator it=maxS.begin(); it!=maxS.end(); ++it)
    cout << *it << endl;

  return 0;
}