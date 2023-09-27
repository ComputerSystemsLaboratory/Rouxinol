#include<iostream>
using namespace std;
int main(){

  int n,m,lock=1;
  string namelist[256];
  string in;
  bool check;
  
  cin >>n;
  
  for(int i=0 ; i < n ; i++)cin >>namelist[i];

  cin >>m;
  
  for(int i=0 ; i < m ; i++){
    cin >>in;
    check=true;
    for(int j=0 ; j < n ;j++){
      if(namelist[j]==in){
	if(lock){
	  cout <<"Opened by ";
	  lock=0;
	}else{
	  cout <<"Closed by ";
	  lock=1;
	}
	cout <<in<<endl;
	check=false;
	break;
      }
    }
    if(check){
      cout <<"Unknown "<<in<<endl;
    }
  }		   
  
  return 0;
}