#include<iostream>
using namespace std;

int main(){
  int n;
  
  while(true){
  cin>>n;
  if(n==0){
    break;
  }else{
    int a[100]={};
  int ushi=0;
  int uma=10000;
  int yagi=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
      if(a[i]>ushi){
	ushi=a[i];}
    if(a[i]<uma)
      {uma=a[i];}
    yagi=yagi+a[i];
  }
  cout<<(yagi-uma-ushi)/(n-2)<<endl;
  }
  }
}