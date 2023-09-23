
#include<iostream>
using namespace std;

#define MAX 1000000

int main()
{
  int a,d,n,cnt;

  int b[MAX+1]={0},i,j;
  b[0]=b[1]=1;
  for(i=4;i<=MAX;i+=2)b[i]=1;
  for(i=3;i*i<=MAX;i+=2)
    if(!b[i])for(j=i+i;j<=MAX;j+=i)b[j]=1;

  while(cin>>a>>d>>n,a|d|n){
    for(cnt=0;a<MAX;a+=d){
      if(!b[a])cnt++;
      if(cnt==n)break;
    }
    cout<<a<<endl;
  }
}