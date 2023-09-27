#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<numeric>
#include<queue>
#include<string>
#include<sstream>

using namespace std;


int main(void) {

  int n, m, p;
  while( cin >> n >> m >> p ){
    if( n == 0 ) break;
    vector<int> x(n);
    for(int i=0; i<n; i++) cin >> x[i];

    int sum = accumulate(x.begin(), x.end(), 0);
    if( x[m-1] == 0 ) cout << 0 << endl;
    else cout << sum * (100-p) / x[m-1] << endl;

  }

  return 0;
}










//