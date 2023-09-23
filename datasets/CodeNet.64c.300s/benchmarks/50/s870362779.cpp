#include<iostream>
using namespace std;

int main(){
  int n,a[101],tmp,cnt=0;
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n-1;i++)
    for(int j=n-1;j>0;j--){
      if(a[j]<a[j-1]){
	tmp=a[j];
	a[j]=a[j-1];
	a[j-1]=tmp;
	cnt++;
      }
    }

  for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
  cout<<a[n-1]<<endl<<cnt<<endl;
  
  return 0;
}