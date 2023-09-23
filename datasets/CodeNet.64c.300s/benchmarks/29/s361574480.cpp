#include<stdio.h>
#include<string.h>
#include<math.h>


int main(){
	int x,y,z,e,m;
	
	while(~scanf("%d",&e)){
		if(e==0)break;
		m=e;
		for(z=0;z*z*z<=e;z++){
			for(y=0;z*z*z+y*y<=e;y++){
				m=m>z+y+e-z*z*z-y*y?z+y+e-z*z*z-y*y:m;
			}
		}
		
		printf("%d\n",m);
	}
	return 0;
}