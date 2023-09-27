#include<stdio.h>

int main()
{
	int e,y,z,m,ans=100000000;

	
	while(1){
		scanf("%d",&e);
		ans=100000000;
		if(e==0)
			break;
		
		else{
			for(y=0; y<=1000; y++){
				for(z=0; z<=100; z++){
					m=e-y*y-z*z*z+y+z;
					if(ans>m && e-y*y-z*z*z>=0)
						ans=m;
				}
			}
		
		printf("%d\n",ans);
	}
	}
	return 0;
}

