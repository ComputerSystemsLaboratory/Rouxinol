#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j,k,l;
  int a,d,n,s[78500];
  s[0]=2;
  j=1;
  for(i=3;i<1000000;i+=2){
    l=(int)sqrt(i)+1;
    for(k=3;k<l;k+=2){
      if(i%k==0)
	break;
    }
    if(k>=l){
      s[j]=i;
      j++;
    }
  }
  while(cin>>a>>d>>n&&a+d+n){
    for(i=0;s[i]<a;i++);
    for(j=0;j<n;i++){
      if((s[i]-a)%d==0)
	j++;
    }
    cout<<s[i-1]<<endl;
  }
  return 0;
}