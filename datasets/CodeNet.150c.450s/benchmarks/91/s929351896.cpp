#include <iostream>
using namespace std;

int main(){
  int n,p[999999];
  bool ip[1000000];
  int m=0;
  for(int i=0;i<=1000000;i++) ip[i]=true;
  ip[0]=ip[1]=false;
  for(int i=2;i<=1000000;i++){
    if(ip[i]){
      p[m++]=i;
      for(int j=2*i;j<=1000000;j+=i) ip[j]=false;
    }
  }
  while(cin>>n){
    for(int i=0;i<m;i++){
      if(p[i]>n){
	cout<<i<<endl;
	break;
      }
    }
    if(n>=p[m-1]) cout<<m<<endl;
  }
  return 0;
}