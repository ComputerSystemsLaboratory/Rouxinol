#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,s,d,f,g,h,j,i;
	char z[201],x[201];
	scanf("%s",z);
	while(z[0]!='-'){
		a=strlen(z);
		scanf("%d",&s);
		for(i=0;i<s;i++){
			scanf("%d",&d);
			f=a-d;
			for(j=0;j<d;j++){
				x[f]=z[j];
				f++;
			}
			g=0;
			for(j=d;j<a;j++){
				x[g]=z[j];
				g++;
			}
			for(j=0;j<a;j++){
				z[j]=x[j];
			}
		}
		printf("%s\n",z);
		scanf("%s",z);
	}
	return 0;
}