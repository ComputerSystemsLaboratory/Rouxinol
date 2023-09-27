#include<iostream>
using namespace std;
int c[10001],n,a[2000000],b[2000001],mx;
void countingsort(){
  for(int i=0;i<n;i++){
    b[c[a[i]]]=a[i];
    c[a[i]]--;
  }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i],c[a[i]]++,mx=max(mx,a[i]);
  for(int i=0;i<mx;i++)c[i+1]+=c[i];
  countingsort();
  for(int i=1;i<n;i++)cout<<b[i]<<" ";
  cout<<b[n]<<endl;
  return 0;
}