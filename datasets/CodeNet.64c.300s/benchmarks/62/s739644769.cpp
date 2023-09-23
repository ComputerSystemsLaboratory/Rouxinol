#include<iostream>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;


  int A[n][m];
  int b[m];
  int t;

  for (int i = 0; i <= n-1; i++){
    for (int j = 0; j <= m-1; j++){
      cin >> t;
      A[i][j] = t;
    }
  }

  for (int j = 0; j <= m-1; j++){
    cin >> t;
    b[j] = t;
  }

  //int c[n] = {};
  for (int i = 0; i <= n-1; i++){
    t = 0;

    for (int j = 0; j <= m-1; j++){
      t += A[i][j] * b[j];
    }
    cout << t << endl;
  }

  return 0;
}