#include<stdio.h>

int main(void){
	double x[4],y[4];
	int n,i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);
		
		if(((y[1]-y[0])/(x[1]-x[0])) == ((y[3]-y[2])/(x[3]-x[2])))printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
	