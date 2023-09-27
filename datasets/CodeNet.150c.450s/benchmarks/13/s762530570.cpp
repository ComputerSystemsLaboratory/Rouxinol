#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(void) {

  string s, p;
  cin >> s >> p;
  s += s;

  for(int i=0; i<s.size(); i++){
    bool f = true;
    for(int j=0; j<p.size(); j++){
      if( i+j >= s.size() ){
        f = false;
        break;
      }
      if( s[i+j] != p[j] ){
        f = false;
        break;
      }
      // cerr << s[i+j] << " " << p[j] << endl;
    }
    if( f ){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}