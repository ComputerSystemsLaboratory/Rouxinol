#include<iostream>
using namespace std;

// #include<cstdio>

int main(){
  int a[100][100],b[100][100];
  long long c[100][100]={};
  int n, m, l;

  cin >> n >> m >> l;

  for (int i=0; i<n; i++){
    for (int j=0; j<m; j++){
      cin >> a[i][j];
    }
  }
  for (int i=0; i<m; i++){
    for (int j=0; j<l; j++){
      cin >> b[i][j];
    }
  }
  for (int i=0; i<n; i++){
    for (int j=0; j<l; j++){
      for (int k=0; k<m; k++){
	c[i][j]+=a[i][k]*b[k][j];
      }
      cout << c[i][j];
      if (j==l-1) continue;
      cout << ' ';
    }
    cout << "\n";
  }
  

  return 0;
}