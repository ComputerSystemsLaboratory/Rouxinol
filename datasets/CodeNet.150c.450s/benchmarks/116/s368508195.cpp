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
  int i;
  int a[100001],m,n;
  int mx;
  a[0]=0;
  while(cin>>n>>m&&n+m){
    for(i=1;i<n+1;i++){
      cin>>a[i];
      a[i]+=a[i-1];
    }
    mx=-1000000000;
    for(i=0;i<n-m+1;i++){
      if(a[i+m]-a[i]>mx)
	mx=a[i+m]-a[i];
    }
    cout<<mx<<endl;
  }
  return 0;
}