#include<iostream>
#include<cstring>
using namespace std;

int h[1500],w[1500];
int H[1500000],W[1500000];


int comb(int *A,int *a,int k){
  int mx;
  for(int i=0;i<k;i++){
    int sum=0;
    for(int j=i;j<k;j++){
      sum+=a[j];
      A[sum]++;
    }
    if(i==0)mx=sum;
  }
  // for(int i=0;i<=mx;i++)
  //   cout << A[i] << " ";
  //cout << endl;
  return mx;
}

int main(){
  int n,m;
  while(cin>>n>>m,n){
    memset(H,0,sizeof(H));
    memset(W,0,sizeof(W));
    int mh,mw;
    for(int i=0;i<n;i++)cin>>h[i];
    mh=comb(H,h,n);
    for(int i=0;i<m;i++)cin>>w[i];
    mw=comb(W,w,m);
    int ans=0;
    for(int i=0;i<=min(mh,mw);i++)
      ans+=H[i]*W[i];
    cout << ans << endl;
  }
}