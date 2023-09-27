#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j;
  int a[102],b[1002],m,n;
  for(i=0;i<102;i++)
    a[i]=(int)pow(i,3);
  for(i=0;i<1002;i++)
    b[i]=(int)pow(i,2);
  while(cin>>n&&n){
    m=2000000000;
    for(i=0;a[i]<=n;i++)
      for(j=0;b[j]<=n-a[i];j++)
	m=min(m,n-a[i]-b[j]+i+j);
    cout<<m<<endl;
  }
  return 0;
}