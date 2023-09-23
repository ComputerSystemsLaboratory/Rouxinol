#include <iostream>
using namespace std;

int main(){
  int n,m,i,j,temp;
  cin>>n>>m;
  int a[n][m],b[m],c[n];
  for (j=0;j<n;j++){
    for (i=0;i<m;i++)cin>>a[j][i];
  }
  for (i=0;i<m;i++)cin>>b[i];
  for (j=0;j<n;j++){
    temp=0;
    for (i=0;i<m;i++)temp+=a[j][i]*b[i];
    cout<<temp<<endl;
  }
}

