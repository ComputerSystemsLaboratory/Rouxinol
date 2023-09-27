#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){

  int n;

  cin >> n;

  int c[n][n];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      c[i][j] = 0;
    }
  }

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    int k;
    cin >> k;
    for(int j = 0; j < k; j++){
      int v;
      cin >> v;
      c[i][v - 1] = 1;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(j == 0) cout << c[i][j];
      else cout << " " << c[i][j];
    }
    cout << endl;
  }
  return 0;
}

