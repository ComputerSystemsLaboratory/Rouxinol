	
#include<iostream>
using namespace std;

int main(){
  int e,x;
  while(1){
    cin>>e;
    if(e==0)break;
    int m1=0,m=1000;
    for(int y=0;y*y<=e;y++)
      for(int z=0;z*z*z<=e-y*y;z++){
	x=e-z*z*z-y*y;
	m1=x+y+z;
	if(m>m1)m=m1;
      }
    cout<<m<<endl;
  }
  return 0;
}