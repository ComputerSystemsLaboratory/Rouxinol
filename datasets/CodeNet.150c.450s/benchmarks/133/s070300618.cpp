#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

#define MOD 1000000007LL

int d;

vector<int> c;
vector<vector<int>> s;
vector<int> t;

int last(int d, int i) {
  int j;

  for (j=d; j>=0; j--) {
    if (t[j] == i) return j+1;
  }
  return 0;
}

int main()
{
  int i, j;
  int conf=0;

  c.resize(26);
  cin >> d;
  for(i=0; i<26; i++) {
    cin >> c[i];
  }

  s.resize(d);
  for (i=0; i<d; i++) {
    s[i].resize(26);
    for (j=0; j<26; j++) {
      cin >> s[i][j];
    }
  }

  t.resize(d);
  for (i=0; i<d; i++) {
    cin >> t[i];
    t[i]--;
    conf += s[i][t[i]];
    for (j=0; j<26; j++) {
      conf -= c[j] * (i+1 - last(i, j));
    }
    printf("%d\n", conf);
  }
  return 0;
}
