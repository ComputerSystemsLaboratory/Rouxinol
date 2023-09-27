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
  int x,y;
  while(1){
    cin >> x >> y;
    if(x == 0 && y == 0) break;
    if(x > y){
      cout << y << " " << x << endl;
    }else{
      cout << x << " " << y << endl;
    }
  }
  return 0;
}

