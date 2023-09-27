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

  map<string, int> mp;
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    string s, t;
    cin >> s >> t;
    if( s == "insert" ) mp[t]++;
    if( s == "find" ) cout << ( mp.find(t) == mp.end() ? "no" : "yes" ) << endl;
  }

  return 0;
}

// EOF