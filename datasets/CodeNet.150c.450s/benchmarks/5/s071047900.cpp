#include<stdio.h>

int main(void){
int a,i;
scanf("%d",&a);
int x[a];
for(i=0;i<a;i++){
	scanf("%d",&x[i]);
}
for(i=0;i<a;i++){
	printf("%d",x[a-i-1]);
	if(i!=a-1){
	printf(" ");
	}else{
	printf("\n");
	} 
}
}
