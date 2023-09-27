#include <iostream>
using namespace std;

int main(){
  int n,m,l;
  cin >> n >> m >> l;
  cin.ignore();
  int mata[n][m];
  int matb[m][l];
  long matc[n][l];
  long int sum;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> mata[i][j];
    }
    cin.ignore();
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
      cin >> matb[i][j];
    }
    cin.ignore();
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      sum = 0;
      for(int k=0;k<m;k++){
        sum += mata[i][k]*matb[k][j];
      }
      matc[i][j] = sum;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      if(j !=(l-1)){
        cout << matc[i][j] <<  " ";
      }else{
	cout << matc[i][j];
      }
    }
    cout << endl;
  }
  return 0;
}

