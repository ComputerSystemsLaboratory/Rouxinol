#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
int inf = 1000000000;

int main(void) {

  int n;
  cin >> n;
  vector<int> f(n+1);
  f[0] = 1;
  f[1] = 1;
  for(int i=2; i<=n; i++) f[i] = f[i-1] + f[i-2];
  cout << f[n] << endl;

  return 0;
}

// EOF