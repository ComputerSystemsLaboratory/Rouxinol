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

string func(string a, string b, int n){
  int x = 0;
  int y = 0;
  // cerr << a << " " << b << endl;
  for(int i=0; i<n; i++){
    // cerr << y << " " << x << endl;
    x += a[i]-'0';
    x *= 10;
    y += b[i]-'0';
    y *= 10;
  }
  x /= 10;
  y /= 10;
  // cerr << y << " " << x << endl;
  return to_string(y - x);
}

int main(void) {
  string n; int l;
  while(cin >> n >> l){
    if( n == "0" && l == 0 ) break;
    int cnt = 0;
    vector<string> ans;
    ans.push_back(n);
    bool f = false;
    while(true){
      while( n.size() != l ) n += '0';
      // cerr << n << " ";
      f = false;
      sort(n.begin(), n.end());
      string n1 = n;
      reverse(n.begin(), n.end());
      string n2 = n;
      n = func(n1, n2, l);

      for(int i=0; i<ans.size(); i++){
        if( n == ans[i] ){
          cout << i << " " << ans[i] << " " << cnt - i + 1 << endl;
          f = true;
          break;
        }
      }
      if( f ) break;

      ans.push_back(n);
      cnt++;
    }

  }

  return 0;
}





// EOF