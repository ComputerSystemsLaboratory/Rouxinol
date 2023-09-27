#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(void) {


  string s;
  cin >> s;
  int q;
  cin >> q;
  for(int i=0; i<q; i++){
    string t;
    cin >> t;
    int a, b;
    if( t == "replace" ){
      string ss;
      cin >> a >> b >> ss;
      for(int i=0; i<=b-a; i++){
        s[i+a] = ss[i];
      }
    }else if( t == "reverse" ){
      cin >> a >> b;
      // string tmp = s;
      reverse(s.begin()+a, s.begin()+b+1 );
    }else if( t == "print" ){
      cin >> a >> b;
      for(int i=a; i<=b; i++){
        cout << s[i];
      }
      cout << endl;
    }
    // cerr << s << endl;
  }

  return 0;
}