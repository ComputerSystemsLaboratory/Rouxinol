#include <stdio.h>
#include <math.h>



#ifndef DEBUG 
#define fprintf (void)
#endif 

int main(void){
	
	double a,b,c,d,e,f;
	double x,y,div;
	int xd[5],yd[5];
	int i;
	double megax,megay;
	int recx,recy;
	

	while(scanf("%lf",&a)!=EOF){
		scanf("%lf",&b);
		scanf("%lf",&c);
		scanf("%lf",&d);
		scanf("%lf",&e);
		scanf("%lf",&f);
		
		div=b*d-a*e;
		x=(b*f-c*e)/div;
		y=(c*d-a*f)/div;
		
		megax=x*10000;
		megay=y*10000;
		
		if(x==-0){
			fprintf(stdout,"yabaix\n");
			x=fabs(x);
		}
		
		if(y==-0){
			fprintf(stdout,"yabaiy\n");
			y=fabs(y);
		}
		
		recx=(int) fabs(megax);
		
		for(i=4;i>0;i--){
		xd[i]=recx%10;
		recx/=10;
		}
		
		xd[0]=recx;
	
		if(xd[4]>=5){
			xd[3]++;
		}
		
		if(xd[3]>=10){
			xd[2]++;
			xd[3]=0;
		}
		
		if(xd[2]>=10){
			xd[1]++;
			xd[2]=0;
		}
		
		if(xd[1]>=10){
			xd[0]++;
			xd[1]=0;
		}
		
		recy=(int) fabs(megay);
		
		for(i=4;i>0;i--){
		yd[i]=recy%10;
		recy/=10;
		}
		
		yd[0]=recy;
	
		if(yd[4]>=5){
			yd[3]++;
		}
		
		if(yd[3]>=10){
			yd[2]++;
			yd[3]=0;
		}
		
		if(xd[2]>=10){
			yd[1]++;
			yd[2]=0;
		}
		
		if(yd[1]>=10){
			yd[0]++;
			yd[1]=0;
		}

		if(x<0){
			xd[0]*=-1;
		}
		
		if(y<0){
			yd[0]*=-1;
		}

		
		printf("%d.%d%d%d %d.%d%d%d\n",xd[0],xd[1],xd[2],xd[3],yd[0],yd[1],yd[2],yd[3]);
	}
	
	return 0;
}