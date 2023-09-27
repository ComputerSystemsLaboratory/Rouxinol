#include<stdio.h>
long long int a,s,d,f[1000][1000],g[1000][1000],k[1000][1000],h,i,j;
int main(void)
{
	scanf("%d %d %d",&a,&s,&d);
	for(i=0;i<a;i++){
		for(j=0;j<s;j++){
			scanf("%lld",&f[i][j]);
		}
	}
	for(i=0;i<s;i++){
		for(j=0;j<d;j++){
			scanf("%lld",&g[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(h=0;h<d;h++){
			for(j=0;j<s;j++){
				k[i][h]+=f[i][j]*g[j][h];
	//			printf("  %d\n",k[i][h]);
			}
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			printf("%lld",k[i][j]);
			if(j!=d-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}