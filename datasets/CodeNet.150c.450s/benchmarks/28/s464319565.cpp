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

bool func(int k, vector<int> w, int p){
  int j = 0;
  for(int i=0; i<k; i++){
    int sum = 0;
    while( sum + w[j] <= p ){
      sum += w[j];
      j++;
      if( j >= w.size() ) return true;
    }
  }
  return j >= w.size();
}

int main(void) {

  int n, k;
  cin >> n >> k;
  vector<int> w(n);
  for(int i=0; i<n; i++) cin >> w[i];

  long long int l = 0, r = n * 10000;
  while( r - l > 1 ){
    int m = (l + r) / 2;

    if( func(k, w, m) ) r = m;
    else l = m;
  }
  cout << r << endl;

  return 0;
}

// EOF