#include<iostream>
#include<cstdio>

using namespace std;

int main(){
 	
  int c,n,i,j,k,l;
  while(cin>>n){
    c=0;
    for(i=0;i<=9;i++){
      for(j=0;j<=9;j++){
	for(k=0;k<=9;k++){
	  for(l=0;l<=9;l++){
	    if(n<i+j+k+l)break;
	    if(n==(i+j+k+l))c++; 
	   
	  }
	}
      }
    }
    
    cout<<c<<endl;
  } 
  return 0;
}