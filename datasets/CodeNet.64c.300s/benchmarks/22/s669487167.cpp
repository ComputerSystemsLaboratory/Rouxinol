#include<stdio.h>
int main(void)
{
	int a,s,z,x,h,d,f,g,i,j;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d %d %d",&s,&z,&x);
		d=x*x;
		h=s*s+z*z;
		if(s<x&&x<z||x<s&&s<z){
			d=z*z;
			h=s*s+x*x;
		}
		if(z<x&&x<s||x<z&&z<s){
			d=s*s;
			h=z*z+x*x;
		}
		if(d==h){
			printf("YES\n");
		}
		if(d!=h){
			printf("NO\n");
		}
	}
	return 0;
}