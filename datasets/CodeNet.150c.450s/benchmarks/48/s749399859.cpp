#include<bits/stdc++.h>
using namespace std;

int main(){
  int e,ans;
  while(1){
    cin>>e;
    if(!e)break;
    ans=(1e9);
    for(int z=0;z*z*z<=e;z++){
      int Z=z*z*z;
      for(int y=0;y*y<=e-Z;y++){
	int Y=y*y;
	int X=e-Y-Z;
	if(X+Y+Z!=e)continue;
	ans=min(ans,X+y+z);
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}