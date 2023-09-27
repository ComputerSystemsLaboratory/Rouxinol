#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x, n){
    int y[n];
    for(int i=0;i<n;++i) cin>>y[i];
    int ans=-1, cnt=0;
    for(int i=0, j=0;i<10001;++i){
      if(x==y[j]){
        cnt++, j++;
        if(cnt==n) ans=i;
      }
      x = (a*x+b)%c;
    }
    cout<<ans<<endl;
  }
  return 0;
}