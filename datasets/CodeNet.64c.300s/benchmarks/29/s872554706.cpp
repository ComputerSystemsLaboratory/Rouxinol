#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		long e, ans=1000000;
		
		scanf(" %ld", &e);
		if(e==0) break;
		
		for(long z=0; z*z*z<=e; ++z){
			long p=z*z*z;
			
			for(long y=0; p+y*y<=e; ++y){
				long q=y*y;
				long x=e-p-q;
				long tmp=x+y+z;	
				
				if(tmp<ans) ans=tmp;
				//printf("(%ld,%ld,%ld),%ld\n",x,y,z, tmp);	
			}
		}
		printf("%ld\n", ans);
	}
	return 0;
}