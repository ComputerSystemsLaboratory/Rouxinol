#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  int e;
  while(scanf("%d",&e),e){
    int x,y,z,ans=10000000;
    for(z=100; z>=0; z--){
      if(z*z*z>e) continue;
      
      for(y=0; y*y<=e-z*z*z; y++){
	x = e-y*y-z*z*z;
	ans = min(ans,x+y+z);
      }
    }
    printf("%d\n",ans);
  }
}