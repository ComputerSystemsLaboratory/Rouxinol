#include <iostream>
using namespace std;

int main(){
  int n,m;
  int arrayA[100][100];
  int array_b[100];
  int arrayX[100]={0};
  
  cin >> n >> m;

  for(int i=0 ; i<n ; i++ ){
    for(int j=0 ; j<m ; j++ ){
      cin >> arrayA[i][j];
    }
  }

  for(int i=0 ; i<m ; i++ ){
    cin >> array_b[i];
  }

  for(int i=0 ; i<n ; i++ ){
    for(int j=0 ; j<m ; j++ ){
      arrayX[i] += arrayA[i][j] * array_b[j];
    }
    cout << arrayX[i] << endl;
  }
  return 0;
}