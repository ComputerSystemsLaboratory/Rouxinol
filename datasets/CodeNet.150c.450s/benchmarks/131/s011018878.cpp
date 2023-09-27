#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
#include <numeric>

using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

int A, L;
vector<int> v;

void solve() {
  v.clear();
  stringstream ss;
  ss << A;
  string base = ss.str();
  while (base.size() < L) base.insert(0, 1, '0');
  v.push_back(atoi(base.c_str()));
  for (int i = 1; i <= 20; ++i) {
    string cur = base;
    sort(base.begin(), base.end());
    sort(cur.begin(), cur.end(), greater<char>());
    int value = atoi(cur.c_str()) - atoi(base.c_str());
    v.push_back(value);

    // printf("%s - %s = %d\n", cur.c_str(), base.c_str(), value);
    
    stringstream ns;
    ns << value;
    base = ns.str();
    while (base.size() < L) base.insert(0, 1, '0');
  }
  // puts("");
  // rep(i,v.size()) printf("%d\n", v[i]);
  // puts("");
  // printf(">>>>  %d %d \n", A, L);
  rep(i,v.size()) rep(j,v.size()) {
    if (i == j || i <= j) continue;
    if (v[i] == v[j]) {
      printf("%d %d %d\n", j, v[i], i - j);
      return;
    }
  }
}

int main() {
  while (scanf("%d%d", &A, &L), A | L) {
    solve();
  }
  return 0;
}