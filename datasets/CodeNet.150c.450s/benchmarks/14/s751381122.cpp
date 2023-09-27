#include<iostream>

using namespace std;

int main(){

  int n;
  int i=1;
  cin>>n;
  while(1){
    while(1){
      int x=i;
      if(x%3==0){
	cout<<" "<<i;
	break;
      }
      while(1){
	if(x%10==3){
	  cout<<" "<<i;
	  break;
	}
	x/=10;
	if(!x) break; 
      }
      break;
    }
    if(++i>n) break;
  }
  cout<<endl;
}