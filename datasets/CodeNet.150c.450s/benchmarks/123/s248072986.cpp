#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,b,e) for (int i=(int)(b); i<(int)(e); i++)
#define ALL(x) (x).begin(), (x).end()

bool isPrime(long long n) {
  if (n < 2)
    return false;
  
  for (long long i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  
  return true;           
}

int main() {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;

  int r = 0;
  REP (i, n) {
    int x;
    cin >> x;
    r += isPrime(x);
  }
  cout << r << endl;
  
  return 0;
}