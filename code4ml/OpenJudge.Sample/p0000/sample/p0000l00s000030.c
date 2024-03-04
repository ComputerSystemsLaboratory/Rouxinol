#include<stdio.h>
int main(){

int a,max1,max2=0,max3=0,i;
for(i=0;i<10;i++){
	scanf("%d",&a);
	if(i==0) max1=a;
	if(max1<a){
		max3=max2;
		max2=max1;
		max1=a;
	}
	else if(max2<a){
		max3=max2;
		max2=a;
	}
	else if(max3<a){
		max3=a;
	}
	}
	printf("%d\n%d\n%d\n",max1,max2,max3);
return 0;
}