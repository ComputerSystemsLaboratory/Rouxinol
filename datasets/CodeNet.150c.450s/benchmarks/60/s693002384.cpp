#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int mat[100][100];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      mat[i][j]=0;

  for(int i=0;i<n;i++){
    int u, k;
    cin >> u >> k;
    for(int i=0;i<k;i++){
      int v;
      cin >> v;
      mat[u-1][v-1]=1;
    }
  }

  for(int i=0;i<n;i++){
    cout << mat[i][0];
    for(int j=1;j<n;j++)
      cout << ' ' << mat[i][j];
    cout << endl;
  }

  return 0;
}