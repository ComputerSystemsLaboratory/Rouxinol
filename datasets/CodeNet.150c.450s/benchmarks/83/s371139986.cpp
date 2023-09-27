#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#define pb push_back

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector< T > >;

int main() {
  int n, max_w;
  cin >> n >> max_w;
  vector<map<string, int> > items;
  items.pb({{"dummy", 0}});
  for (int i = 0 ; i < n ; i++) {
    int v_tmp, w_tmp;
    cin >> v_tmp >> w_tmp;
    map<string, int> mp;
    mp["value"] = v_tmp;
    mp["weight"] = w_tmp;
    items.pb(mp);
  }

  vvi max_value(n+1, vi(max_w+1, 0));
  for (int item_num = 1 ; item_num <= n ; item_num++) {
    for (int w_left = 1 ; w_left <= max_w ; w_left++) {
      max_value[item_num][w_left] = max_value[item_num-1][w_left];
      if (w_left >= items[item_num]["weight"]) {
        max_value[item_num][w_left] = max(max_value[item_num][w_left], 
          items[item_num]["value"] + max_value[item_num-1][w_left - items[item_num]["weight"]]);
      }
    }
  }

  printf("%d\n", max_value[n][max_w]);

  return 0;
}