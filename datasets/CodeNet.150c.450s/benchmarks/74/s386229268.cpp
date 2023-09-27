#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int val[20],tbl[21][50001];
  int n,m;
  for (int i= 0;i<50001;i++)tbl[0][i] = 50001;
  for (int i=0;i<21;i++)tbl[i][0]=0;

  cin >> n >> m;

  for (int i=0;i<m;i++)
    cin >> val[i];

  for (int i = 1;i <= m;i++){
    for (int j = 1;j<=n;j++){
      if (j-val[i-1]<0) tbl[i][j]=tbl[i-1][j];
      else tbl[i][j]=min(tbl[i-1][j],tbl[i][j-val[i-1]]+1);
      //cout << tbl[i][j];
    }
    //cout << endl;
  }

  cout << tbl[m][n] << endl;
  return 0;
}