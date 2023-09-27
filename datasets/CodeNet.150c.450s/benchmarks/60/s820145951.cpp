#include <iostream>

using namespace std;

int mat[100][100];

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;++i){
    int u,k;
    cin >> u >> k;
    for(int j=0;j<k;++j){
      int v;
      cin >> v;
      mat[u-1][v-1] = 1;
    }
  }

  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cout << mat[i][j];
      if(j!=n-1){
        cout << " " ;
      }else{
        cout << endl ;
      }
    }
  }

  return 0;
}