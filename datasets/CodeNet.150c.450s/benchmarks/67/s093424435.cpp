#include<iostream>
using namespace std;
int main(){
  int n;
  while(cin>>n){
    if(n==0)break;
    int count=0;
    for(int i=1;i<n;i++){
      int a=0;
      for(int j=i;a<=n;j++){
	a+=j;
	if(n==a)count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}