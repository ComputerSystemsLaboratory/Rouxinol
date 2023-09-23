#include<iostream>
using namespace std;
int main(){
  while(1){
    int e,m,x,min=1000000000;
    cin>>e;
    if(e==0)break;

    for(int z=0;z*z*z<=e;z++)  
      for(int y=0;y*y<=e-z*z*z;y++){
	  x=e-z*z*z-y*y;
	  m=x+y+z;
	  if(m<min)min=m;
	}
      cout<<min<<endl;
  }
  return 0;
}