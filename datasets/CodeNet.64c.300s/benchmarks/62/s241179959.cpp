#include<iostream>

using namespace std;

int main(){
  int n,m;

  cin >> n >> m;

  unsigned long long A[101][101],B[101][1];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> A[i][j];
    }
  }

  for(int i=0;i<m;i++){
    cin >> B[i][1];
  }

  unsigned long long C[101][1]={{}};

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      C[i][1] += A[i][j]*B[j][1];
    }
  }

  for(int i=0;i<n;i++){
    cout << C[i][1] << endl;
  }

  return 0;
}