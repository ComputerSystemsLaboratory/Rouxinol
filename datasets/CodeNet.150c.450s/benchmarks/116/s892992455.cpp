#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int n,k;
  while(cin>>n>>k,n||k){
    int ans = -10001;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<k;++i)sum+=a[i];
    for(int i=0;i<n-k;++i){
      if(sum>ans)ans=sum;
      sum-=a[i];
      sum+=a[i+k];
    }
    cout<<ans<<endl;
  }
  return 0;
}