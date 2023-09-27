#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,m;
  string user[1000];
  
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>user[i];
  }
  
  bool locked=true;
  cin>>m;
  for(int i=0;i<m;i++){
    string str;
    cin>>str;
    bool found=false;
    for(int i=0;i<n&&!found;i++){
      if(user[i]==str){
	found=true;
	if(locked){
	  cout<<"Opened by "<<user[i]<<endl;
	  locked=false;
	}else{
	  cout<<"Closed by "<<user[i]<<endl;
	  locked=true;
	}
      }
    }
    if(!found){
      cout<<"Unknown "<<str<<endl;
    }
  }
  return(0);
}

