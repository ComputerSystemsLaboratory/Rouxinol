#include<iostream>
using namespace std;

int main(void){
  int m, a[100][100];
  int b[100][100]={0};

  cin >> m;

  for(int i=0; i<m; i++){
    cin >> a[i][0];
    cin >> a[i][1];

    for(int j=2; j<a[i][1]+2; j++){
      cin >> a[i][j];
      b[i][ a[i][j]-1 ] = 1;
    }
  }

  for(int i=0; i<m; i++){
    cout << b[i][0];
    for(int j=1; j<m; j++){
      cout << " " << b[i][j];
    }
    cout << "\n";
  }
  return 0;
}

