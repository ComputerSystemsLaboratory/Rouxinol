#include<iostream>
using namespace std;
int main(){
  while(1){
    int n,a,b=0,c=0,k[51]={};
    cin>>n>>a;
    if(n+a==0)break;
    while(1){
      for(int i=0;i<n;i++){
	if(a!=0){
	  a--;
	  k[i]++;
	  if(a==0){
	    for(int j=0;j<n;j++)if(k[j]!=0)b++;
	    if(b==1){
	      cout<<i<<endl;
	      c++;
	    }
	    else b=0;
	  }
	}else{
	  a+=k[i];
	  k[i]=0;
	}
      }
      if(c==1)break;
    }
  }
  return 0;
}