#include <cstdio>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
int main(){
	while(true){
		int e,mn=1e9;
		scanf("%d",&e);
		if(!e) break;
		for(int z=0;z*z*z<=e;z++){
			for(int y=0;y*y+z*z*z<=e;y++){
				mn=min(mn,y+z+(e-y*y-z*z*z));
			}
		}
		printf("%d\n",mn);
	}
	return 0;
}