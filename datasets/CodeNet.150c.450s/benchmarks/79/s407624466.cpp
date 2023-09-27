#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<random>
#include<map>
#include<queue>
using namespace std;

int main(){

  int n, r;
  while(cin >> n >> r){
    if( n == 0 && r == 0 ) break;
    vector<int> p(r);
    vector<int> c(r);
    for(int i=0; i<r; i++) cin >> p[i] >> c[i];

    vector<int> d(n);
    for(int i=0; i<n; i++) d[i] = n-i;

    for(int i=0; i<r; i++){
      vector<int> tmp;
      for(int j=0; j<c[i]; j++){
        tmp.push_back( d[ p[i]-1+j ] );
        d[ p[i]-1+j ] = -1;
      }
      for(int j=0; j<n; j++){
        if( d[j] == -1 ) continue;
        tmp.push_back( d[j] );
      }
      d = tmp;
      // for(int j=0; j<n; j++) cerr << d[j] << " ";
      // cerr << endl;
    }
    cout << d[0] << endl;
  }

  return 0;
}