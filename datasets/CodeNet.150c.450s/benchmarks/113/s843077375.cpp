#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int main() {
  int x,i;
  x = 1;
  i = 0;
  while(1){
    cin >> x;
    i += 1;
    if(x == 0) break;
    cout << "Case " << i << ": " << x << endl;
  }
  return 0;
}

