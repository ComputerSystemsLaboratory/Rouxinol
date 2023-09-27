#include <bits/stdc++.h>
using namespace std;
int a[45];
int main(){
  a[0]=a[1]=1;
  for(int i=2;i<45;++i){
  	a[i]=a[i-1]+a[i-2];
  }
  int n;
  cin>>n;
  cout<<a[n]<<endl;
}