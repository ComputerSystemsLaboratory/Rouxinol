#include<iostream>
using namespace std;
int main(){
  string u[256],t;
  int n,m,i,j,f=0,k;
  cin>>n;
  for(i=0;i<n;i++)cin>>u[i];
  cin>>m;
  for(i=0;i<m;i++){
    cin>>t;
    k=f;
    for(j=0;j<n;j++)if(t==u[j]){
	if(f==0)f=1,cout<<"Opened by "<<t<<endl;
	else f=0,cout<<"Closed by "<<t<<endl;
      }
    if(k==f)cout<<"Unknown "<<t<<endl;
  }
  return 0;
}