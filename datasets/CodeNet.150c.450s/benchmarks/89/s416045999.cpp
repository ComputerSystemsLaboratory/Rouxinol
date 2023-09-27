#include<iostream>
using namespace std;
int main(){
  int b,d,n,f,a[1000001]={};
  a[0]=1,a[1]=1;
  for(int i=2;i<=1000;i++)if(a[i]==0)for(int j=2;j<=1000000/i;j++)a[i*j]=1;
       while(1){
    int count=0;
    cin>>b>>d>>n;
    if(b+d+n==0) break;
    for(int i=b;i<=1000000;i+=d){
      if(a[i]==0) count++;
       f=i;
       if(count==n) break;
      }
    	cout<<f<<endl;
  }
  return 0;
}