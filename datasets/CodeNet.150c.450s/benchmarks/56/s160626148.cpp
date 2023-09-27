#include<iostream>
using namespace std;
int main(void){
  long n,i,j,cnt=0,tmp;
  int a[10000];
  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
    cnt+=a[i];
  }
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j--){
      if(a[j]>a[j-1]){
	tmp=a[j];
	a[j]=a[j-1];
	a[j-1]=tmp;
      }
    }
  }
  cout<<a[n-1]<<" "<<a[0]<<" "<<cnt<<endl;
  return 0;
}