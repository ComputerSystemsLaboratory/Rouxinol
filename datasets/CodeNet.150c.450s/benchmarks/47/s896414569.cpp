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
  int w,h,x,y,r;
  cin >> w >> h >> x >> y >> r;
  if(r <= x && x <= w-r && r <= y && y <= h - r){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}

