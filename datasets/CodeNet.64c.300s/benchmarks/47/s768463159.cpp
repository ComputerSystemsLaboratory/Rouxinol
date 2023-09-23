#include<iostream>
using namespace std;
int main(){
  int n;
  int d[102]={0};
  int max=0;
  while(cin>>n){
    d[n]++;
    if(max<d[n]){
      max=d[n];
    }
  }
  if(max!=0){
    for(int i=0;i<101;i++){
      if(d[i]==max){
	cout<<i<<endl;
      }
    }
  }
  return 0;
} 