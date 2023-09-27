#include<iostream>
using namespace std;
int main (){
  int n,a[100],i,j,v,flag,count=0;

  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }

  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(a[j]>a[j+1]){      
	v=a[j];
	a[j]=a[j+1];
	a[j+1]=v;
	count++;
      }
    }
  }
    for(i=0;i<n;i++){
      if(i<n-1){
	cout<<a[i]<<" ";
      }else{
	cout<<a[i]<<endl;
      }
    }
    cout<<count<<endl;

  return 0;
}