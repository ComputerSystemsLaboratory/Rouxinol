#include<iostream>
#include<stdio.h>

int main(){
	int n,i,a,b,c;
  std::cin>>a;
  for(n=0,i=100000;a>n;++n){
	  i=i+i/20;
	  if(i%1000!=0){
		  b=i%1000;
		  i=i+1000-b;
		}
	}
  std::cout<<i<<std::endl;
	return 0;
	}