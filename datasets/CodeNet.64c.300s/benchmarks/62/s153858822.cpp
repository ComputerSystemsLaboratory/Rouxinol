#include <iostream>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  cin.ignore();
  int mat[n][m];
  int vec[m];
  int s = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> mat[i][j];
    }
    cin.ignore();
  }
  for(int j=0;j<m;j++){
    cin >> vec[j];
    cin.ignore();
  }
  for(int i=0;i<n;i++){
    s = 0;
    for(int j=0;j<m;j++){
      s += mat[i][j]*vec[j];
    }
    cout << s << endl;
  }
  return 0;
}

