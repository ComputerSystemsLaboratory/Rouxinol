#include<iostream>
using namespace std;


int main(){
  int n,a[101],minj,tmp,cnt=0;
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n-1;i++){
    minj=i;
    for(int j=i;j<n;j++)if(a[j]<a[minj])minj=j;
    	tmp=a[i];
	a[i]=a[minj];
	a[minj]=tmp;
	if(i!=minj)cnt++;
  }
  for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
  cout<<a[n-1]<<endl<<cnt<<endl;
  
  
  return 0;
}