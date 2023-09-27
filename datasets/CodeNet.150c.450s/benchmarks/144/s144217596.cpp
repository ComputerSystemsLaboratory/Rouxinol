#include <iostream>
using namespace std;

int main(){
  int n,m,l,i,j,k;
  long temp=0;
  cin>>n>>m>>l;
  int a[n][m],b[m][l];
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for (i=0;i<m;i++){
    for (j=0;j<l;j++){
      cin>>b[i][j];
    }
  }
  /*入力終わり*/
  for (i=0;i<n;i++){
    for (j=0;j<l;j++){
      for (k=0;k<m;k++)temp+=a[i][k]*b[k][j];
      if (j)cout<<' ';
      cout<<temp;
      temp=0;
    }
    cout<<endl;
  }
}

