#include<iostream>
#define N 100
using namespace std;

int main(){
  int n,a[N],cnt=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=1;i<n;i++)
    for(int j=n-1;j>=i;j--){
      if(a[j-1]>a[j]){
	int t=a[j];
	a[j]=a[j-1];
	a[j-1]=t;
	cnt++;
      }
    }
  for(int i=0;i<n;i++){
    if(i)cout<<' ';
    cout<<a[i];
  }
  cout<<endl<<cnt<<endl;
  return 0;
}