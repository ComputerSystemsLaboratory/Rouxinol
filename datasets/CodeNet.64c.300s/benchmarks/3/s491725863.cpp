#include<iostream>
using namespace std;
int main(void){
  int n,a[100];
  int i,j;
  cin>>n;
  for(i=n-1;i>=0;i--){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    if(i==0){
      cout<<a[i];
    }else{
      cout<<" "<<a[i];
    }
  }
  cout<<endl;
  return 0;
}