#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int main()
{
  int n,r;
  int i,j,k;
  int p,c;
  int a[60];//a[0]??????
  int b[60];
  int x;

  while(1){
    cin>>n>>r;
    if(n==0 && r==0)break;
    for(i=0;i<n;i++)
      a[i]=n-i;

    for(i=0;i<r;i++){
      cin>>p>>c;
      for(j=0;j<c;j++)//c??????????????????
	b[j]=a[p-1+j];
      for(k=0;k<p-1;k++)//p-1???????????¨???
	b[j+k]=a[k];
      for(x=0;x<j+k;x++)//??????????????????
	a[x]=b[x];      
    }    
    cout<<a[0]<<endl;
  }
}