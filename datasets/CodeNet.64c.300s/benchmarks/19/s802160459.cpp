#include <iostream>
using namespace	std;
int main(){

  for(int n;cin>>n&&n;){
    int a[5000],r;
    cin>>a[0];
    r=a[0];
    for(int i=1,b;i<n;i++){
      cin>>b;
      a[i]=a[i-1]+b;
      r=max(r,max(a[i],b));
    }
    for(int i=0;i<n-1;i++) for(int j=i+1;j<n;j++) r=max(r,a[j]-a[i]);
    cout<<r<<endl;
  }
  return 0;
}