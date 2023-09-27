#include<iostream>
using namespace std;

int main(){
  int n,a[101],b[101];
  while(1){
    
    cin>>n;
    if(n==0) break;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
    int max=0,min=10001;
    for(int i=0;i<n;i++){
      if(max<a[i]){
	max=a[i];
      }
      if(min>a[i]){
	min=a[i];
      }
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=a[i];
    }
    sum-=(max+min);
    
    cout<<sum/(n-2)<<endl;
  }
  return 0;
}