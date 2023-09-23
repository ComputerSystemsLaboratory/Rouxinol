#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  int matrix[n][m];
  int vector[m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d",&matrix[i][j]);
    }
  }

  for(int i=0; i<m; i++){
    scanf("%d",&vector[i]);
  }

  for(int i=0; i<n; i++){
  int s = 0;
    for(int j=0; j<m; j++){
      s += matrix[i][j]*vector[j];
    }
   cout << s << endl;
 }

  

}