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
#include <stack>
#include <string>
#include <vector>

#define pb push_back
#define all(v) begin(v), end(v)
#define debug(x) cerr<< #x <<": "<<x<<endl
#define debug2(x,y) cerr<< #x <<": "<< x <<", "<< #y <<": "<< y <<endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector< T > >;
typedef deque<int> di;
typedef deque<deque<int> > ddi;

int main() {
  while(true) {
    int n;
    cin >> n;
    if (n == 0) { break; }
    set<char> set;
    map<char, char> map;
    for (int i = 0; i < n; ++i) {
      char tmp1, tmp2;
      cin >> tmp1 >> tmp2;
      set.insert(tmp1);
      map[tmp1] = tmp2;
    }

    int m;
    cin >> m;
    string str;
    for (int i = 0; i < m; ++i) {
      char tmp;
      cin >> tmp;
      if (set.count(tmp) == 1) {
        tmp = map[tmp];
      }
      str += tmp;
    }
    str += "\n";
    cout << str;
  }

  return 0;
}