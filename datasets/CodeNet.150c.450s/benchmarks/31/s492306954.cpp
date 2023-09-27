#include <iostream>
using namespace std;
int a[200000];
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];

  int mx=a[n-1],ans=-1e9;
  for(int i=n-2;i>=0;i--){
    if(mx-a[i]>ans)ans=mx-a[i];     
    if(mx<a[i])mx=a[i];
    }
  cout <<ans<<endl;
  return 0;
}