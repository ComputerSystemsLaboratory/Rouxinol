#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(void) {

  int r, c;
  cin >> r >> c;
  vector< vector<int> > m(r, vector<int>(c));
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cin >> m[i][j];
    }
  }
  vector<int> s(c+1, 0);
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cout << m[i][j] << " ";
      s[j] += m[i][j];
    }
    cout << accumulate(m[i].begin(), m[i].end(), 0) << endl;
    s[c] += accumulate(m[i].begin(), m[i].end(), 0);
  }
  for(int i=0; i<c; i++){
    cout << s[i] << " ";
  }
  cout << s[c] << endl;


  return 0;
}