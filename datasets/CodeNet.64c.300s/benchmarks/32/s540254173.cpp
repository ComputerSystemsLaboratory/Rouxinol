#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,x,sum=0,minx=1000000,maxx=-1000000;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>x;
    sum+=x;
    maxx=max(maxx,x);
    minx=min(minx,x);
  }
  cout<<minx<<" "<<maxx<<" "<<sum<<endl;
  return 0;
}

