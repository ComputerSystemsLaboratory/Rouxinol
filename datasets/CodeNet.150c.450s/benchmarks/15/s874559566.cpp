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
  vector<int> s(n);
  for(int i=0; i<n; i++) cin >> s[i];
  int q;
  cin >> q;
  vector<int> t(q);
  for(int i=0; i<q; i++) cin >> t[i];

  int cnt = 0;
  for(int i=0; i<q; i++){
    for(int j=0; j<n; j++){
      if( s[j] == t[i] ){
        cnt++;
        break;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}

// EOF