#include<iostream>
#include<vector>
using namespace std;

int main(){
  while(1){
  int n,m;
  cin>>n>>m;
  if(n==0&&m==0)break;
  vector<int> t(n);
  vector<int> h(m);
  int tsum=0;
  int hsum=0;
  for(int i=0;i<n;i++){
    cin>>t[i];
    tsum+=t[i];
  }
  for(int i=0;i<m;i++){
    cin>>h[i];
    hsum+=h[i];
  }
  int ans=0;
  int anss=tsum-hsum;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if((t[i]-h[j])*2==anss){
        ans=1;
        cout<<t[i]<<" "<<h[j]<<endl;
        break;
      }
    }
    if(ans==1)break;
  }
if(ans==0)cout<<-1<<endl;
}
  return 0;
}