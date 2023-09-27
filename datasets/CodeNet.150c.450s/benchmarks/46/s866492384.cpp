#include<stdio.h>
int main(void)
{
	int a,s,d,f,g,h,i,j;
	while(1){
		g=0;
		scanf("%d %d",&a,&s);
		if(a==0&&s==0)
			break;
		for(i=1;i<=a;i++){
			for(j=i+1;j<=a;j++){
				for(h=j+1;h<=a;h++){
					if(h!=i&&i!=j&&h!=j){
						if(h+j+i==s)
							g++;
					}
				}
			}
		}
		printf("%d\n",g);
	}
	return 0;
}