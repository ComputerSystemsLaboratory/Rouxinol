#include<iostream>
#include<string>
using namespace std;

int main(){

  int n,m;
  cin>>n;
  string u[n];

  for(int i=0;i<n;i++){
    cin>>u[i];
  }

  cin>>m;
  string t[m];
  
  for(int i=0;i<m;i++){
    cin>>t[i];
  }

  int b=0;

  for(int i=0;i<m;i++){
    int a=0;
    for(int j=0;j<n;j++){
      if(t[i]==u[j]){
	a=1;
      }
    }

    if(a==1){
      if(b==0){
	cout<<"Opened by "<<t[i]<<endl;
	b=1;
      }else{
	cout<<"Closed by "<<t[i]<<endl;
	b=0;
      }
    }else{
      cout<<"Unknown "<<t[i]<<endl;
    }

  } 


  return 0;

}