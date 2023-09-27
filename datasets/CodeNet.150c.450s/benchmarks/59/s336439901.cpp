#include<bits/stdc++.h>

#define lp2(i,n) for(int i=0;i<n;i++)
#define lp3(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){
  int n;
  cin>>n;
  int h[n];
  lp2(i,n)cin>>h[i];
  lp2(k,n){
    if(k!=n-1)cout<<h[k]<<" ";
    else cout<<h[k]<<endl;
    }
  lp3(i,1,n){
    int v=h[i];
    int j=i-1;
    while(j>=0&&h[j]>v){
      h[j+1]=h[j];
      h[j]=v;
      j--;
    }
    lp2(k,n){
      if(k!=n-1)cout<<h[k]<<" ";
      else cout<<h[k]<<endl;
  }
  }
  
  return 0;
  
}

