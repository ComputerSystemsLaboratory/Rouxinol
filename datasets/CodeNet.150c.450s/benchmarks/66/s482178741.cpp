#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,m,f=0,c=0;
  string u[300],t;
  cin>>n;
  for(int i=0;i<n;i++)cin>>u[i];
  cin>>m;
  for(int i=0;i<m;i++){
    c=0;
    cin>>t;
    for(int j=0;j<n;j++){
      if(t==u[j]){
	if(f==0){
	  cout<<"Opened by "<<t<<endl;
	  f=1;
	  c++;
	}else{
	  cout<<"Closed by "<<t<<endl;
	  f=0;
	  c++;
	}
      }
    }if(c==0)cout<<"Unknown "<<t<<endl;
  }
  return 0;
}