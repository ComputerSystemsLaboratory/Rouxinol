#include<iostream>
using namespace std;

int main(){
  int A[100][100],b[100],c[100];
  int i,j;
  int n,m;
  cin >> n >> m;

  for(i = 0;i < n;i++){
    for(j = 0;j < m;j++){

      cin >> A[i][j];
    }
  }

  for(i = 0;i < m;i++){

    cin >> b[i];
  }
  for(i = 0;i < n;i++){
    c[i] = 0;
    for(j = 0;j < m;j++){

      c[i] += A[i][j]*b[j];
    }
    cout << c[i] << "\n";
  }
}