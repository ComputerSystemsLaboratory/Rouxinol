#include<stdio.h>
int main(void)
{
	int a,b,temp;
	scanf("%d %d",&a,&b);
	
	while(!(a==0 && b==0)){
		if(a>=b){
			temp=a;
			a=b;
			b=temp;
		printf("%d %d\n",a,b);
		}
			else{
				printf("%d %d\n",a,b);
			}
		
		scanf("%d %d",&a,&b);
	}
	return 0;
}