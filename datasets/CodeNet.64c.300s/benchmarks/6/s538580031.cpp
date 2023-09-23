#include <iostream>
using namespace std;

int main(void)
{
  int n,v,r,f,b,i,j,k;
  int m[11][4][5]={};

  cin >> n;
  for(i=1;i<=n;i++){
    cin >> b >> f >> r >> v;
    m[r][f][b]=m[r][f][b]+v;
  }
  for(i=1;i<=4;i++) {
    for(j=1;j<=3;j++) {
      for(k=1;k<=10;k++) cout << " " << m[k][j][i];
      cout << endl;
    }
    if(i != 4)
      cout << "####################" << endl;
  }

  return 0;
}