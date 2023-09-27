#include<iostream>
using namespace std;

int main(){
  int m=1000000,e;
  
  while(1){
    cin>>e;
    m=1000000;
    if(e==0)break;
    for(int z=0;z*z*z<=e;z++){
      for(int y=0;y*y<=(e-z*z*z);y++){
	int x=e-y*y-z*z*z;
	if(e==x+y*y+z*z*z) m=min(m,(x+y+z));	
      }
    }
    cout<<m<<endl;
  }
  return 0;
}