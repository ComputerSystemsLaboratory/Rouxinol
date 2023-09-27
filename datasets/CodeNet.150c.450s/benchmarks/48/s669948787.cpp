#include<iostream>
using namespace std;
int main(){
  while(1){
    int e,a;cin>>e;if(e==0)break;a=e;
    for(int i=0,z=0;z<=e;i++,z=i*i*i)
      for(int j=0,y=0;y+z<=e;j++,y=j*j)
	if(i+j+e-y-z<a)a=i+j+e-y-z;
    cout<<a<<endl;
  }
  return 0;
}