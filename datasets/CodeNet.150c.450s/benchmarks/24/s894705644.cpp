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

  int n, m;
  while(cin >> n >> m){
    if( n == 0 ) break;

    vector< pair<int, int> > p(n);
    for(int i=0; i<n; i++) cin >> p[i].second >> p[i].first;
    sort(p.begin(), p.end());
    for(int i=n-1; i>=0; i--){
      if( p[i].second < m ){
        m -= p[i].second;
        p[i].second = 0;
      }else{
        p[i].second -= m;
        m = 0;
        break;
      }
    }
    int sum = 0;
    for(int i=0; i<n; i++) sum += p[i].first * p[i].second;
    cout << sum << endl;
  }

  return 0;
}

// EOF