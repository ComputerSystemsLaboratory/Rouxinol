#include <iostream>
using namespace std;

int np(int n,int a){
  int i,k;
  n++;
  if(n==2)return 2;
  if(n%2==0)n++;
  while(1){
    for(int i=n;;i+=2){
      k=0;
      for(int j=3;j*j<=i;j+=2){
	if(i%j==0){
	  k=1;
	  break;
	}
      }
      if(k==0)return i;
    }
  }
}


int main(){
  int a,now;
  cin>>a;
  cout<<a<<":";
  now=1;
  while(a!=1){
    now=np(now,a);
    if(now*now>a){
      cout<<" "<<a;
      break;
    }
    while(a%now==0){
      cout<<" "<<now;
      a/=now;
    }
  }
  cout<<endl;
  return 0;
}