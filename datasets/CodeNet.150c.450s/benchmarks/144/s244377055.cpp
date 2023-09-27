#include <iostream>
using namespace std;

int main(void)
{
  int n,m,l,i,j,k;
  long int a[101][101]={};
  long int b[101][101]={};
  long int c[101][101]={};

  cin >> n >> m >> l;

  for(i = 1; i <= n; i++){
    for(j = 1; j <= m; j++){
      cin >> a[i][j];
    }
  }

  for(j = 1; j <= m; j++){
    for(k = 1; k <= l; k++){
      cin >> b[j][k];
    }
  }

  for(i = 1; i <= n; i++){
    for(k = 1; k <= l; k++){
      c[i][k] = 0;
      for(j =1; j <=m; j++){
        c[i][k] = c[i][k] + a[i][j]*b[j][k];
      }
      cout << c[i][k];
      if(k != l) cout << " ";
    }
    cout << endl;
  }

  return 0;
}