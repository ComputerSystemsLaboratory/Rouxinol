#include<iostream>
using namespace std;
int hyou1[1500001]={},hyou2[1500001]={};
int main(){
  int n,m;
  while(cin>>n>>m,n){
    for(int i=0;i<1500001;i++)hyou1[i]=0,hyou2[i]=0;
    int a[1500],b[1500];
    for(int i=0;i<n;i++)cin>>a[i],hyou1[a[i]]++;
    for(int i=0;i<m;i++)cin>>b[i],hyou2[b[i]]++;
    for(int i=0;i<n;i++){
      int sum=a[i];
      for(int j=i+1;j<n;j++){
        sum+=a[j];
        hyou1[sum]++;
      }
    }
    for(int i=0;i<m;i++){
      int sum=b[i];
      for(int j=i+1;j<m;j++){
        sum+=b[j];
        hyou2[sum]++;
      }
    }
    int ans=0;
    for(int i=0;i<1500001;i++){
      ans+=hyou1[i]*hyou2[i];
    }
    cout<<ans<<endl;
  }
  return 0;
}