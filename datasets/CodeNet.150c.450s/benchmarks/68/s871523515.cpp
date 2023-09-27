#include<iostream>
using namespace std;
int main(){
  int n,a[1001]={};
  while(1){
    int min=1000000;
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++)
	if(a[i]-a[j]>=0){
	  if(min>a[i]-a[j])min=a[i]-a[j];
	}
	else{ 
	  if(min>a[j]-a[i])min=a[j]-a[i];
	}

    cout<<min<<endl;
  }
  return 0;
}