#include<iostream>
#include<cstdio>
using namespace std;
int num[5001];
/*
int sum(int a,int b){
  int s=0;
  for(int i=0;i<b;i++){
    s+=num[a+i];
  }
  return s;
}
*/
int main(){
  int max;
  int n,sum;
  
  while(cin>>n,n){
    max=-10000000;
    // int sum=-10000000;
    for(int i=0;i<n;i++){
      cin>>num[i];
    }
    for(int i=0;i<n;i++){
      sum=0;
      for(int j=i;j<n;j++){
	sum+=num[j];
	if(max<sum)max=sum;
      }
    }
    cout<<max<<endl;
  }
}