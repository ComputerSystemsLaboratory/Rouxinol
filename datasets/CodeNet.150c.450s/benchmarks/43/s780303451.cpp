#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n&&n){
    int ansa=0,ansb=0;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
      cin>>a[i]>>b[i];
      if(a[i]>b[i]) ansa+=(a[i]+b[i]);
      else if(b[i]>a[i]) ansb+=(a[i]+b[i]);
      else {
	ansa+=a[i];
	ansb+=b[i];
      }
    }
    cout<<ansa<<" "<<ansb<<endl;
  }
  return 0;
}