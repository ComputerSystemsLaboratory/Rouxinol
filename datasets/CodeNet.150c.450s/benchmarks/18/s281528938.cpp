#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
  int n=0;
  int m=100000;
  cin>>n;
  for(int i=0;i<n;i++){
	  m=m*1.05;
	  if(m%1000!=0){
		  m=m+999;
		  m=m/1000;
		  m=m*1000;
	  }
  }
  cout<<m<<endl;

  return 0;
}