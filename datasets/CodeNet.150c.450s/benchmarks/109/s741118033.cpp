#include <stdio.h>
#include <memory.h>
int y[24*3600];
int main(void){
	int n,h,m,s,i,max;
	while(scanf("%d",&n),n){
		max=0;
		memset(y,0,sizeof(y));
		for(i=0;i<2*n;i++){
			scanf("%d:%d:%d",&h,&m,&s);
			if(!(i%2))y[h*3600+m*60+s]++;
			else y[h*3600+m*60+s]--;
		}
		for(i=0;i<24*3600;i++){
			if(i>0)y[i]+=y[i-1];
			if(y[i]>max)max=y[i];
		}
		printf("%d\n",max);
	}
	return 0;
}