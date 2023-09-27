#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
long long int a[100][100],b[100][100],c[100][100]={0};
int n,m,l,i,j,k;
cin>>n>>m>>l;
for(i=0;i<n;i++)for(j=0;j<m;j++)cin>>a[i][j];
for(i=0;i<m;i++)for(j=0;j<l;j++)cin >> b[i][j];
for(i=0;i<n;i++)for(j=0;j<l;j++)for (k=0;k<m;k++)c[i][j]+=a[i][k]*b[k][j];
for(i=0;i<n;i++){for(j=0;j<l;j++){
if (j)cout<<' ';
cout<<c[i][j]; 
}
cout<<endl;
}
}