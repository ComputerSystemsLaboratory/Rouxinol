#include <iostream>
#include <vector>
#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

typedef long long ll;

int lcs(string X, string Y){
  int x = X.size();
  int y = Y.size();

  int d[y+1][x+1];
  memset(d, 0, sizeof(d));

  for(int i = 1; i <= y; i++){
    char a = Y[i-1];

    for(int j = 1; j <= x; j++){
      char b = X[j-1];

      if(a == b){
        d[i][j] = max(d[i][j], d[i-1][j-1] + 1);
      }else{
        d[i][j] = max(d[i-1][j], d[i][j-1]);
      }
    }
  }

  return d[y][x];
}

int main(){
  int n;
  string x, y;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> x;
    cin >> y;

    cout << lcs(x, y) << endl;
  }

  return 0;
}