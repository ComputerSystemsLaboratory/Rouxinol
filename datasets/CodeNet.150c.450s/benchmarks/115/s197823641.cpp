#include<iostream>
#include<string>
#include<cstdio>
using namespace std;



int lcs(string x, string y){

  int m = x.length();
  int n = y.length();

  int c[m + 1][n + 1];

  for(int i = 0; i <= m; i++){
    c[i][0] = 0;
  }
  for(int i = 1; i <= n; i++){
    c[0][i] = 0;
  }

  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++){
      if(x[i - 1] == y[j - 1]){
        c[i][j] = c[i - 1][j - 1] + 1;
      }
      else if(c[i - 1][j] > c[i][j - 1]){
        c[i][j] = c[i - 1][j];
      }
      else{
        c[i][j] = c[i][j - 1];
      }
  //    cout << "c" << i << j << c[i][j] << endl;
    }

  }

  return c[m][n];
}

int main(){

  int q;

  string x, y;

  cin >> q;

  for(int i = 0; i < q; i++){
    cin >> x;
    cin >> y;
    cout << lcs(x, y) << endl;
  }



  return 0;
}

