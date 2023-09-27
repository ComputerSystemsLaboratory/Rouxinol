#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  while( cin >> n, n ) {
    map<char,char> data;

    for(int i=0; i<n; i++) {
      char c1, c2;
      cin >> c1 >> c2;
      data[c1] = c2;
    }

    int m;
    char c;
    string s = "";
    cin >> m;
    for(int i=0; i<m; i++) {
      cin >> c;
      if (data.find(c) != data.end()) {
	s += data[c];
      }
      else {
	s += c;
      }
    }
  
    cout << s << endl;
  }
}