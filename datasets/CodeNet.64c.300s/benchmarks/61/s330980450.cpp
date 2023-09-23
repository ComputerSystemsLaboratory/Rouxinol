#include <iostream>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  cin.ignore();
  int spread[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> spread[i][j];
    }
    cin.ignore();
  }
  int sumh[n]; //sum of horizontal
  int sumv[m]; //sum of vertical
  int suma = 0; //sum of all
  for(int i=0;i<n;i++){
    sumh[i] = 0;
  }
  for(int j=0;j<m;j++){
    sumv[j] = 0;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      sumh[i] += spread[i][j];
      sumv[j] += spread[i][j];
      suma += spread[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout << spread[i][j] << " ";
      
    }
    cout << sumh[i] << endl;
  }
  for(int j=0;j<m;j++){
    cout << sumv[j] << " ";
  }
  cout << suma << endl;
  return 0;
}     

