#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <string>
#include <string.h>
#include <sstream>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

typedef long long ll;

int main(){
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  int dist = min( min( H-y, y ), min( W-x, x ) );

  if( dist >= r ){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}