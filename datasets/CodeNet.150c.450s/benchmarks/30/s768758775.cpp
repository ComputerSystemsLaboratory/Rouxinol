#include<iostream>
using namespace std;
int main (){
  int n,a[100],i,j,minj,v,count=0;

  cin>>n;
  for(i=1;i<=n;i++){
    cin>>a[i];
  }

  //sorting
  for(i=1;i<=n;i++){
    minj=i;
    for(j=i+1;j<=n;j++){
      if(a[j]<a[minj]){
	minj=j;

      }
    
    }
	v=a[i];
	a[i]=a[minj];
	a[minj]=v;
	if(i!=minj){
	  count++;
	}
  }

  //output answer
    for(i=1;i<=n;i++){
      if(i==n){
	cout<<a[i]<<endl;
      }else{
	cout<<a[i]<<" ";
      }
    }
    cout<<count<<endl;

  return 0;
}