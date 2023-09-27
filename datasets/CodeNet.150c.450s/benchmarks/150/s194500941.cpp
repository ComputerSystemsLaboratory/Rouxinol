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

vector<int> csort(vector<int> a, int k){
  int n = a.size();
  vector<int> c(k+1, 0);
  vector<int> b(n+1, 0);
  for(int i=0; i<n; i++) c[a[i]]++;
  for(int i=1; i<=k; i++) c[i] += c[i-1];
  for(int i=0; i<n; i++){
    b[c[a[i]]] = a[i];
    c[a[i]]--;
  }
  return b;
}

int main(void) {

  int n;
  while(cin >> n){
    if( n == 0 ) break;
    vector<int> x(n);
    for(int i=0; i<n; i++) cin >> x[i];

    vector<int> a = csort(x, *max_element(x.begin(), x.end()));
    for(int i=1; i<n+1; i++){
      if( i != n ) cout << a[i] << " ";
      else cout << a[i] << endl;
    }

  }




  return 0;
}