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
#define debug(x) cout<< #x <<": "<<x<<endl
#define debug2(x,y) cout<< #x <<": "<< x <<", "<< #y <<": "<< y <<endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector< T > >;

int main() {
  vi a(31, 0);
  a[0] = 1;
  a[1] = 1;
  a[2] = 2;
  for (int i = 3; i <= 30; ++i) {
    a[i] = a[i-1]+a[i-2]+a[i-3];
  }
  const int try_per_year = 365*10;
  while (true) {
    int steps;
    cin >> steps;
    if (steps == 0) { break; }
    printf("%d\n", (a[steps]+try_per_year-1)/try_per_year);
  }

  return 0;
}