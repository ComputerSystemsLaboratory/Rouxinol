// input: alds1_10_c.in
#include<iostream>
#include<algorithm>
#define MAX_X 1000
#define MAX_Y 1000
using namespace std;

int c[MAX_X+1][MAX_Y+1];

int lcs(string& a, string& b) {
  a = ' ' + a;
  b = ' ' + b;

  for(int i=0; i<a.length(); i++) {
    c[i][0] = 0;
  }
  for(int i=0; i<b.length(); i++) {
    c[0][i] = 0;
  }

  for(int i=1; i<a.length(); i++) {
    for(int j=1; j<b.length(); j++) {
      if(a[i] == b[j]) {
        c[i][j] = c[i-1][j-1] + 1;
      } else {
        c[i][j] = max(c[i][j-1], c[i-1][j]);
      }
    }
  }

  return c[a.length()-1][b.length()-1];
}

int main() {
  int n;
  string a, b;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> a >> b;

    cout << lcs(a, b) << endl;
  }
}