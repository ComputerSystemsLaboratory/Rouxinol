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
  while(cin >> s){
    if( s == "-" ) break;

    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0; i<n; i++) cin >> h[i];

    string tmp = "";
    for(int i=0; i<n; i++){
      tmp = "";
      for(int j=h[i]; j<s.size(); j++) tmp += s[j];
      for(int j=0; j<h[i]; j++) tmp += s[j];
      s = tmp;
      // cerr << s << endl;
    }
    cout << s << endl;
  }



  return 0;
}