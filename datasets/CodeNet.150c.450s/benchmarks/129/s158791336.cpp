#include<cstdio>
#include<iostream>
using namespace std;
int main(){
  int n, m;
  cin >> n >>m;
  int data[101][101] = {0};
  for(int i = 0; i < n ; i ++) {
    for(int j = 0; j < m ; j++) { 
      cin >> data[i][j];
      data[i][m] += data[i][j];
      data[n][j] += data[i][j];
      data[n][m] += data[i][j];
    }
  }


  for(int i = 0; i < n+1 ; i ++) {
    for(int j = 0; j < m+1 ; j++) { 
      cout << data[i][j];
      if (j != m) {
      cout << " ";
      } 
    }
    cout << endl;
  }
}