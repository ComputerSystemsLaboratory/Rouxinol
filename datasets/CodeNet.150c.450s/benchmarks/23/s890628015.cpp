#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
  int f[45];
  f[0]=f[1]=1;
  r(i,2,45)f[i]=f[i-1]+f[i-2];
  int a;cin>>a;
  cout<<f[a]<<endl;
}