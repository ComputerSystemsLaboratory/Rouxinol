#include<iostream>
using namespace std;
int main(){
  int a,d,n,so[1000000]={},c,i,j;
  so[1]=1;
  for(i=2;i<500000;i++)if(so[i]==0)for(j=2;i*j<1000000;j++)so[i*j]=1;
  while(1){
    cin>>a>>d>>n;
    if(n==0)break;
    c=0;
    for(i=a;c<n;i+=d)if(so[i]==0)c++;
    cout<<i-d<<endl;
  }
  return 0;
}