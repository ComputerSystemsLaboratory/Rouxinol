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
  int cnt = 0;
  cin >> a >> b >> c;
  for(int i = a;i<= b;i++){
    if (c % i == 0){
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}

