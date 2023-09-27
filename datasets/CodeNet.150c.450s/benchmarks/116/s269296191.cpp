#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,k,p,ans=0,sum=0;
  cin>>n>>k;

  while(n!=0&&k!=0){
    vector<int> v;
    for(int i=0;i<n;i++){
      cin>>p;
      v.push_back(p);
    }
    for(int i=0;i<=n-k;i++){
      for(int j=0;j<k;j++){
        sum+=v[i+j];
      }
      if(sum>=ans){
        ans=sum;
      }
      sum=0;
    }
    cin>>n>>k;
    cout<<ans<<endl;
  }
  return 0;
}