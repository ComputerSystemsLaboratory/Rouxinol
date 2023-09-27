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
  int a,b,c;
  cin >> a >> b >> c;
  if(a < b && b < c){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
    return 0;
}

