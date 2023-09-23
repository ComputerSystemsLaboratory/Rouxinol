#include<stdio.h>
int main(void)
{
	int a,s,d,f,i,z;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
	z=0;
	scanf("%d %d %d",&s,&d,&f);
		if(s<f&&d<f){
			if(s*s+d*d==f*f){
				z=1;
				printf("YES\n");
			}
		}
		else if(s<d&&f<d){
			if(s*s+f*f==d*d){
				z=1;
				printf("YES\n");
			}
		}
		else if(f<s&&d<s){
			if(d*d+f*f==s*s){
				z=1;
				printf("YES\n");
			}
		}
		if(z==0){
			printf("NO\n");
		}
	}
	return 0;
}