#include <iostream>
using namespace std;

int main(void)
{
  int r,c,i,j,k;
  int a[102][102]={};

  cin >> r >> c;

  for(j = 1; j <= r; j++){
    a[c+1][j] = 0;
    for(i = 1; i <= c; i++){
      cin >> a[i][j];
      a[c+1][j] = a[c+1][j] + a[i][j];
    }
  }

  for(i = 1; i <= c+1; i++){
    a[i][r+1] = 0;
    for(j = 1; j <= r; j++){
      a[i][r+1] = a[i][r+1] + a[i][j];
    }
  }

  for(j = 1; j <= r+1; j++){
    for(i = 1; i <= c+1; i++){
      cout << a[i][j];
      if(i!=c+1) cout << " ";
    }
    cout << endl;
  }

  return 0;
}