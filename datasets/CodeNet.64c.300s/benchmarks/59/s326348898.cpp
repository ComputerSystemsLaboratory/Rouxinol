#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,k,s=1,num=0;
  cin>>n;
  for(int i=0;i<n;i++){
    int m;
    k=0;
    cin>>m;
    if(m==2){
      num++;
    }else if(m%2==0){
      continue;
    }else{
      for(int j=3;j<=sqrt(m);j+=2){
	if(m%j==0){
	  k=1;
	  break;
	}
      }
      if(k==0)
	num++;
    }
  }
  cout<<num<<endl;
  return 0;
}