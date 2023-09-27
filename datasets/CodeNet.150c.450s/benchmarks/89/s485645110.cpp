#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a,d,n;
  int b[1000000]={};
  int c[1000000]={};
  c[2]=1;
  for(int i=3;i<1000000;i+=2){
    int y=0;
    for(int j=3;j<=sqrt(i);j+=2)
      if(i%j==0){y=1;break;}
    if(y==0)c[i]=1;
  }

  while(1){
    cin>>a>>d>>n;
    if(a==0 && d==0 && n==0)break;
    int i=0,cnt=0;
    while(1){
      i++;
      if(i==1)
	b[1]=a;
      else
	b[i]=b[i-1]+d;
    
      if(c[b[i]]==1)cnt++;

      if(cnt==n){cout<<b[i]<<endl;break;}
    }
  }
  
  return 0;
}