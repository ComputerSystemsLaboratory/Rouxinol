#include <iostream>
using namespace std;
int main(){
  
  long int a[100][100]={0},b[100][100]={0},c[100][100]={0},n,m,l,i,j,k;
  cin >> n >> m >> l;
  for(i=0;i<n;i++)for(j=0;j<m;j++)cin >> a[i][j];
  for(j=0;j<m;j++)for(k=0;k<l;k++)cin >> b[j][k];
  for(i=0;i<n;i++)for(j=0;j<m;j++)for(k=0;k<l;k++){
    c[i][k]+=a[i][j]*b[j][k];
  }
  for(i=0;i<n;i++){
    for(k=0;k<l;k++){
      if(k!=l-1)cout << c[i][k] << " ";
      else cout << c[i][k] << endl;}
  }

}