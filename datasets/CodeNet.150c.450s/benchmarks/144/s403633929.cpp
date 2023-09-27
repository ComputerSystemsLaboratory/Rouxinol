#include<stdio.h>

int main(void)
{
	int n,m,l,a[200][200],b[200][200];
	double c;
	
	scanf("%d %d %d",&n,&m,&l);
	
	int i,t,p;
	
	for(i=0;i<n;i++){
		
		for(t=0;t<m;t++){
			
			scanf("%d",&a[i][t]);
			//printf("%d\n",a[i][t]);
		}
	}
	for(i=0;i<m;i++){
		
		for(t=0;t<l;t++){
			
			scanf("%d",&b[i][t]);
			//printf("%d\n",b[m][l]);
		}
	}
	for(i=0;i<n;i++){
		
		for(t=0;t<l;t++){
			
			c=0;
			
			for(p=0;p<m;p++){
				
				c=c+a[i][p]*b[p][t];
				
			}
			printf("%.0lf",c);
			
			if(t==l-1){
				printf("\n");
			}
			else printf(" ");
		}
	}
	return 0;
}