#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,m;
  while(1){
    cin>>n>>m;
    if(n==0&&m==0)break;
    vector<int> h(n);
    vector<int> w(m);

    for(int i=0;i<n;i++)cin>>h[i];
    for(int i=0;i<m;i++)cin>>w[i];

    vector<int> hc(1500*1000+1,0);
    vector<int> wc(1500*1000+1,0);

    for(int i=1;i<=n;i++){
      int tmp=0;
      for(int j=0;j<i;j++)tmp+=h[j];
      hc[tmp]++;
      for(int j=0;j<n-i;j++){
        tmp+=h[j+i];
        tmp-=h[j];
        hc[tmp]++;
      }
    }

    for(int i=1;i<=m;i++){
      int tmp=0;
      for(int j=0;j<i;j++)tmp+=w[j];
      wc[tmp]++;
      for(int j=0;j<m-i;j++){
        tmp+=w[j+i];
        tmp-=w[j];
        wc[tmp]++;
      }
    }

    long long int ans=0;

    for(int i=0;i<1500*1000+1;i++){
      //if(i<8)cout<<hc[i]<<" "<<wc[i]<<endl;
      ans+=hc[i]*wc[i];
    }
    cout<<ans<<endl;

  }

  return 0;
}