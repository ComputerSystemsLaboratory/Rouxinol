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

  int m, nmin, nmax;
  while(cin >> m >> nmin >> nmax){
    if( m == 0 ) break;

    vector<int> p(m);
    for(int i=0; i<m; i++) cin >> p[i];

    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());

    int g = 0;
    int ans = nmin;
    for(int i=nmin-1; i<nmax; i++){
      if(g <= p[i] - p[i+1]){
        ans = i+1;
        g = p[i] - p[i+1];
      }

    }
    cout << ans << endl;
  }


  return 0;
}










//