#include <iostream>
#include <utility>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int f(int x) {
  return ((x)*(x+1)*(x+2))/6;
}

const int INF = 1 << 28;
int adp[1000000];
int odp[1000000];
bool done[1000000] = {};
bool odan[1000000] = {};
vector<int> list;

int main()
{
  for(int i = 1; f(i) < 1000000; ++i) {
    list.push_back(f(i));
  }
  rep(i, 1000000) {
    adp[i] = INF;
    odp[i] = INF;
  }
  done[0] = true;
  adp[0] = 0;
  odan[0] = true;
  odp[0] = 0;
  for(auto v : list) {
    rep(i, 1000000 - v) {
      if(done[i]) {
        adp[i + v] = min(adp[i + v], adp[i] + 1);
        done[i + v] = true;
      }
      if(v&1 && odan[i]) {
        odp[i + v] = min(odp[i + v], odp[i] + 1);
        odan[i + v] = true;
      }
    }
  }

  int n;
  while(cin >> n, n) {
    cout << adp[n] << " " << odp[n] << endl;
  }

  return 0;
}