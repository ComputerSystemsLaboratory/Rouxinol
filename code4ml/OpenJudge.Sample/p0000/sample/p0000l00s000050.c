#include<stdio.h>
int main(void){
	int m1,m2,m3,d,i;
	for(i=0;i<10;i++){
		scanf("%d",&d);
		if(d>m1){
			m3=m2;
			m2=m1;
			m1=d;
		}else if(d>m2){
			m3=m2;
			m2=d;
		}else if(d>m3){
			m3=d;
		}
	}
	printf("%d\n",m1);
	printf("%d\n",m2);
	printf("%d\n",m3);
	return 0;
}