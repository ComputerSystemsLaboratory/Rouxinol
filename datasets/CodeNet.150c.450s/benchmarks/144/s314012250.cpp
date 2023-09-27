#include <iostream>
#define R(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
long long int a[100][100],b[100][100],c[100][100]={0};
int n,m,l,i,j,k;
cin>>n>>m>>l;
R(i,n)R(j,m)cin>>a[i][j];
R(i,m)R(j,l)cin>>b[i][j];
R(i,n)R(j,l)R(k,m)c[i][j]+=a[i][k]*b[k][j];
R(i,n){R(j,l){
if (j)cout<<' ';
cout<<c[i][j]; 
}
cout<<endl;
}
}