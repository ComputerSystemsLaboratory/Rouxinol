#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>


using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main(int argc, char** argv){
  size_t n;
  cin >> n;
  int m, M, buf;
  cin >> m;
  M = INT_MIN;
  for (size_t i = 1; i < n; i++) {
    cin >> buf;
    M = max(M, buf - m);
    m = min(m, buf);
  }
  cout << M << endl;
  
  return 0;
}