#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int i,j,c,a[5];
  for(i=0;i<5;i++){
    cin>>a[i];
  }
  for(i=0;i<4;i++){
    for(j=i+1;j<5;j++){
      
      if(a[i]<a[j]){
	c=a[i];
	a[i]=a[j];
	a[j]=c;
      }
    }
  }
  for(i=0;i<5;i++){
    cout<<a[i];
    if(i!=4)cout<<' ';
  }
  cout<<endl;
  
  return 0;
}