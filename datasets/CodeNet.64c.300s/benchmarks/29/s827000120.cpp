#include<iostream>
#include<algorithm>
using namespace std;
int e;
int x,y,z;
int main(){
  while(true){
    cin>>e;
    int ans=1000000;
    if(e==0) break;
    for(int z=0;z*z*z<=e;z++){
      for(int y=0;y*y+z*z*z<=e;y++){
        x=e-y*y-z*z*z;
        ans=min(ans,x+y+z);
          }
    }
    cout<<ans<<endl;
  }
}