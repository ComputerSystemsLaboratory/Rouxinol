#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
  long long N,ans=0;
  while(cin>>N,N){
    ans=0;
  vector<long long> v(N);
  rep(i,N){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  for(int i=1;i<N-1;i++)ans+=v[i];
  cout<<ans/(N-2)<<endl;
  }
 return 0;
}