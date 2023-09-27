#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j,k;
  int a[200],b[50],n,p;
  bool c[1000000],d[1000000];
  a[0]=b[0]=0;
  p=0;
  j=1;
  for(i=1;a[i-1]<1000000;i++){
    p+=i;
    a[i]=a[i-1]+p;
    if(a[i]%2){
      b[j]=a[i];
      j++;
    }
  }
  while(cin>>n&&n){
    memset(c,0,n);
    c[0]=1;
    for(i=1;;i++){
      memset(d,0,n);
      for(j=0;j<n;j++){
	if(c[j]){
	  for(k=0;j+a[k]<n;k++)
	    d[j+a[k]]=1;
	  if(j+a[k]==n)
	    break;
	}
      }
      if(j!=n)
	break;
      memcpy(c,d,n);
    }
    cout<<i<<" ";
    memset(c,0,n);
    c[0]=1;
    for(i=1;;i++){
      memset(d,0,n);
      for(j=0;j<n;j++){
	if(c[j]){
	  for(k=0;j+b[k]<n;k++)
	    d[j+b[k]]=1;
	  if(j+b[k]==n)
	    break;
	}
      }
      if(j!=n)
	break;
      memcpy(c,d,n);
    }
    cout<<i<<endl;
  }
  return 0;
}