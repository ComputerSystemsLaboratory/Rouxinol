#include<iostream>
using namespace std;

int main(){
  int array[110]={};
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  for(int i=n-1;i>=1;i--){
    cout<<array[i]<<" ";
  }
  if(n != 0){
    cout<<array[0]<<endl;
  }
  return 0;
}