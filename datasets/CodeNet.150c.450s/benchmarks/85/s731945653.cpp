#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

int n;

int m[101][101];

int p[101];


void matrix(){
  for(int i = 1; i < n; i++){
    m[i][i] = 0;
  }

  for(int l = 2; l <= n; l++){
    for(int i = 1; i <= n - l + 1; i++){
      int j = i + l - 1;
      m[i][j] = 1000000;
      for(int k = i; k <= j - 1; k++){
        m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
      }
    }
  }
}

int main(){

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> p[i] >> p[i + 1];
  }

  matrix();

  cout << m[1][n] << endl;



  return 0;
}

