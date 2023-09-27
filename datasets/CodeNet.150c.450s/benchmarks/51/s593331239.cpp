#include<iostream>
using namespace std;
int main(){
  int a[31]={},i,b;
    for(i=0;i<28;i++){
      cin>>b;
      a[b]=1;
    }
    for(i=1;i<=30;i++)
      if(a[i]==0)
	cout<<i<<endl;
    return 0;
  }