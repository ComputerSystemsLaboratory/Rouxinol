#include <iostream>
using namespace std;

int main(){
  int n, m, l;
  long int mat1[100][100]={};
  long int mat2[100][100]={};
  long int ans[100][100]={};

  cin >> n >> m >> l;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> mat1[i][j];
    }
  }
  for(int j=0; j<m; j++){
    for(int k=0; k<l; k++){
      cin >> mat2[j][k];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){
      for(int k=0; k<m; k++){
        ans[i][j] += mat1[i][k]*mat2[k][j];
      }
      if(j==l-1) cout << ans[i][j] << endl;
      else cout << ans[i][j] << " ";
    }
  }
}
