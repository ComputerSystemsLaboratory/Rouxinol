#include<iostream>
using namespace std;

void rengeSwap(int b,int e,int* ans){
  int tmp[b];
  b--;
  for(int i=0;i<b;i++){
    tmp[i]=ans[i];
  }
  for(int i=b;i<b+e;i++){
    ans[i-b]=ans[i];
  }
  for(int i=e;i<b+e;i++){
    ans[i]=tmp[i-e];
  }
}

int main(){
  int n,r;
  while(cin>>n>>r,n){
    int ans[n];
    for(int i=0;i<n;i++){
      ans[i]=n-i;
    }

    for(int i=0;i<r;i++){
      int b,e;
      cin>>b>>e;
      rengeSwap(b,e,ans);
    }
cout << ans[0] << endl;
  }
  return 0;
}