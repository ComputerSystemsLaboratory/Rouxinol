#include<iostream>
using namespace std;

int main(){

  int n,m,l,i,j;

cin >> n >> m >> l;

int matrixA[100][100];
int matrixB[100][100];
long long matrixC[100][100];


for(i = 0; i < n; i++){
  for(j = 0; j < l; j++){
  matrixC[i][j] = 0;
  }
}

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      cin >> matrixA[i][j];
    }
  }
  for(i = 0; i < m; i++){
    for(j = 0; j < l; j++){
      cin >> matrixB[i][j];
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < l; j++){
      for(int k = 0; k < m; k++){
        matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
      }
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < l; j++){
      cout << matrixC[i][j];
      if(j != l-1){
         cout << ' ';
      }
    }
    cout << endl;
  }
  return 0;
}