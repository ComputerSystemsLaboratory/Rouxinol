#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int i,j,n,max,sum,a[5001];
  while(1){
    cin>>n;
    if(n==0)break;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++){ 
      sum=0;
      for(j=i;j<n;j++){
	sum+=a[j];
	if(max<sum)max=sum;	
      }
    }
    cout<<max<<endl;
  }
  return 0;
}