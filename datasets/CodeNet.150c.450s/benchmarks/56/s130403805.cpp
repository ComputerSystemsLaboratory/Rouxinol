#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int i,n,a[10000];
  cin>>n;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int min=a[0],k;
  for(k=1;k<n;k++){
    if(min>a[k]){
      min=a[k];
    }
  }


  int max=a[0],h;
  for(h=1;h<n;h++){
    if(max<a[h]){
      max=a[h];
    }
  }


  int j;
  long long sum=0;
  for(j=0;j<n;j++){
	  sum+=a[j];
  }


  cout<<min<<" "<<max<<" "<<sum<<endl;
  
}