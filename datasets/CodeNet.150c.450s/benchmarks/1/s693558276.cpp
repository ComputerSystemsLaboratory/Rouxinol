#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n,a[100001],l[100000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  l[0]=a[0];
  int length=1;
  for(int i=1;i<n;i++){
    if(l[length-1]<a[i]){
      l[length++]=a[i];
    }else {
      *lower_bound(l,l+length,a[i])=a[i];
    }
  }
  cout<<length<<endl;
  return 0;
}