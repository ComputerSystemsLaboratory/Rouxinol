#include <iostream>
using namespace std;
int n,a[500005];
void mh(int tm){
  int l=2*tm,r=2*tm+1,b;
  if(l<=n&&a[l]>a[tm]) b=l;
  else b=tm;
  if(r<=n&&a[r]>a[b]) b=r;
  if(b-tm){
    swap(a[tm],a[b]);
    mh(b);
  }
}
int main(){
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=n/2;i>=1;i--) mh(i);
  for(int i=1;i<=n;i++) cout<<" "<<a[i];
  cout<<endl;
  return 0;
}