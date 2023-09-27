#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	int i,j;
	double x[5],y[5];
	double xx,yy;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<4;j++){
			scanf("%lf %lf",&x[j],&y[j]);
		}
		if(x[0]-x[1]==0 || x[2]-x[3]==0){
			if(x[0]-x[1]==0 && x[2]-x[3]==0){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else {
			xx=(y[0]-y[1])/(x[0]-x[1]);
			yy=(y[2]-y[3])/(x[2]-x[3]);
//			printf("%lf %lf\n",xx,yy);
			xx=xx-yy;		
			if(xx<0.0000001 && xx>-0.0000001){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}	
	return 0;
}