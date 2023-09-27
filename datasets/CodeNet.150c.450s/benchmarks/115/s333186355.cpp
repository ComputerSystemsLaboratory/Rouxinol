#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
static const int N = 1000;

int lcs(string x, string y){
  int c[N + 1][N + 1], maxl = 0, i, j;
  int m = x.size();
  int n = y.size();

  x = ' ' + x;
  y = ' ' + y;
 
  for(i = 1; i <= m; i++) c[i][0] = 0;
  for(i = 0; i <= n; i++) c[0][i] = 0;

  for(i = 1; i <= m; i++){
    for(j = 1; j <= n; j++){
      if(x[i] == y[j]){
	c[i][j] = c[i - 1][j - 1] + 1;
      } else{
	c[i][j] = max(c[i - 1][j], c[i][j - 1]);
      }
      maxl = max(maxl, c[i][j]);
    }
  }
  return maxl;
}

int main(){
  string x, y;
  int q, i;

  cin >> q;
  
  for(i = 0; i < q; i++){
    cin >> x >> y;
    cout << lcs(x, y) << endl;
  }
  return 0;
}