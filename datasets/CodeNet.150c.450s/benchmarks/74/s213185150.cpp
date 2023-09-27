#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<random>
#include<stack>
#include<queue>
#include<cassert>
using namespace std;
int inf = 1000000000;

int main(void) {

  int n, m;
  cin >> n >> m;
  vector<int> c(m);
  for(int i=0; i<m; i++) cin >> c[i];

  vector<int> cn(n+1, inf);
  for(int i=0; i<m; i++) cn[ c[i] ] = 1;

  for(int i=1; i<=n; i++){
    for(int j=0; j<m; j++){
      if( i - c[j] < 0 ) continue;
      cn[i] = min(cn[i], cn[ i - c[j] ] + 1);
    }
  }
  cout << cn[n] << endl;


  return 0;
}





// EOF