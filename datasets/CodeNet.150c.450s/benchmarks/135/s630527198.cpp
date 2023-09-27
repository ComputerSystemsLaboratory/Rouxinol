#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool solve(){
  int i,j;
  int n,m;
  int tmp;
  int ans=0;
  cin>>n>>m;
  if(n==0 && m==0)return false;
  vector<int> h,w;
  vector<int> h_sum,w_sum;
  for(i=0;i<n;i++){
    cin>>tmp;
    h.push_back(tmp);
  }
  for(i=0;i<m;i++){
    cin>>tmp;
    w.push_back(tmp);
  }
  for(i=0;i<n;i++){
    tmp=h[i];
    h_sum.push_back(tmp);
    for(j=i+1;j<n;j++){
      tmp+=h[j];
      h_sum.push_back(tmp);
    }
  }
  for(i=0;i<m;i++){
    tmp=w[i];
    w_sum.push_back(tmp);
    for(j=i+1;j<m;j++){
      tmp+=w[j];
      w_sum.push_back(tmp);
    }
  }
  sort(h_sum.begin(),h_sum.end());
  sort(w_sum.begin(),w_sum.end());
  tmp=0;
  for(i=0;i<h_sum.size();i++){
    for(j=tmp;j<w_sum.size();j++){
      if(h_sum[i]==w_sum[j]){
        ans++;
        if(w_sum[tmp]<w_sum[j])tmp=j;
      }
      if(h_sum[i]<w_sum[j])break;
    }
  }
  cout<<ans<<endl;
  return true;
}
int main(){
  while(solve());
  return 0;
}
