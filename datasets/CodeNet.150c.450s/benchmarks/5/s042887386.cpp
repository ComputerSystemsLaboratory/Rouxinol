#include <iostream>
#define N 100
using namespace std;

int main(){
  int n,a[N];
  
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int j=n-1;j>=0;j--){
    if(j==0) cout<<a[j]<<endl;
    else cout<<a[j]<<" ";
  }
  return 0;
}
