#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=1;i<=n;i++)
int a[100002];
int s[100002];

int main(){
  while(1){
    int n,k;
    cin>>n>>k;
    if(n==0)return 0;
    loop(i,n)cin>>a[i];
    s[1]=0;
    loop(j,k){
      s[1]+=a[j];
    }
    int m=s[1];
    loop(i,n-k+1){
      if(i==1)continue;
      s[i]=s[i-1]-a[i-1]+a[i+k-1];
      m=max(m,s[i]);
    }
    cout<<m<<endl;
  }
  return 0;
}