#include<stdio.h>
int main(void){
	int h[10],i,m[3]={};
	
	for(i=0;i<10;i++){
		scanf("%d",&h[i]);
		if(m[0]<h[i]){
			m[2]=m[1];
			m[1]=m[0];
			m[0]=h[i];
			
		}
		else if(m[1]<h[i]){
			m[2]=m[1];
			m[1]=h[i];
		}
		else if(m[2]<h[i])
			m[2]=h[i];
			
		
	}
	for(i=0;i<3;i++)
	printf("%d\n",m[i]);
	return 0;
}