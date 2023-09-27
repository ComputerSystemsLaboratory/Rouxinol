#include<iostream>
#include<algorithm>
using namespace std;
int t[100000],sum,n,m,ans;
int main(){
  while(cin>>n>>m&&n&&m){
    sum=0;
    for(int i=0;i<n;i++){
      cin>>t[i];
      if(i<m)sum+=t[i];
    }
    ans=sum;
    for(int i=m;i<n;i++){
      sum+=t[i];
      sum-=t[i-m];
      ans=max(ans,sum);
    }
    cout<<ans<<endl;
  }
  return 0;
}