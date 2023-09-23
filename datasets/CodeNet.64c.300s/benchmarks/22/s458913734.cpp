#include<stdio.h>
int main(void)
{
	int a,b,c1,c2,c3,i;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d %d %d",&c1,&c2,&c3);
	
		if(c1*c1+c2*c2==c3*c3){
			printf("YES\n");
		}
		else if(c1*c1+c3*c3==c2*c2){
			printf("YES\n");
		}
		else if(c2*c2+c3*c3==c1*c1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}