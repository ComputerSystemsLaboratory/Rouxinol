#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  
  while( cin >> n, n ) {
    map<char, char> mp;
    for( int i=0; i<n; i++ ) {
      char a, b;
      cin >> a >> b;
      mp[a] = b;
    }
    
    string res = "";
    int m;
    cin >> m;
    for( int i=0; i<m; i++ ) {
      char a;
      cin >> a;
      if( mp.count(a) ) a = mp[a];
      res += a;
    }

    cout << res << endl;
  }
  
  return 0;
}