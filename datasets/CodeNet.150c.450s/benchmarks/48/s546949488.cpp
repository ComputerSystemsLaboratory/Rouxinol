#include<iostream>
using namespace std;
int e,ans;
int main(){
  while(1){
    cin>>e;
    if(e==0)break;
    ans=e;
    for(int y=0;y*y<=e;y++){
      for(int z=0;z*z*z+y*y<=e;z++){
	int x=e-y*y-z*z*z;
	ans=(ans<x+y+z?ans:x+y+z);
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}