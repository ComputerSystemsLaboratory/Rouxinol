#include<iostream>
using namespace std;
int main(){
int a,b,n,i,j,x[40],y[40],m[17][17];
while(cin>>a>>b,a*a+b*b){
for(i=1;i<=a;i++)
for(j=1;j<=b;j++)m[i][j]=-1;
cin>>n;
for(i=0;i<n;i++){
cin>>x[i]>>y[i];
m[x[i]][y[i]]=0;
}
m[1][1]=1;
for(j=2;j<=b;j++)if(m[1][j]==-1)m[1][j]=m[1][j-1]; 
for(i=2;i<=a;i++){
if(m[i][1]==-1)m[i][1]=m[i-1][1];
for(j=2;j<=b;j++)if(m[i][j]==-1)m[i][j]=m[i-1][j]+m[i][j-1]; 
}
cout<<m[a][b]<<endl;
}
return 0;
}