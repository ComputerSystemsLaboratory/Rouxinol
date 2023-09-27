#include<iostream>
using namespace std;

int main(){
  int n,p;
  while(1){
  cin>>n>>p;
  if(n+p==0) break;
  int a[50]={},s=p;
  int i=0,vic,f=0;
  while(1){
    if(i==n) i=0;
    if(f==1) break;

    if(p<=0){
	if(a[i]==s){
	  f=1;
	  vic=i;
	}

      if(p==0){
	  p+=a[i];
	  a[i]=0;
	} 
    }

    else{
      a[i]++;
      p--;
    }
  i++;
  }

  cout<<vic<<endl;
  }
  return 0;
}