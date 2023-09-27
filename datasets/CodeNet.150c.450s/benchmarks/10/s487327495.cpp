#include<stdio.h>
int main(void){
	int a,n,c,d,b,f,r,v,kami[4][3][10]={{{0}}};
	scanf("%d",&a);
	for(n=0;n<a;n++){
		scanf("%d %d %d %d",&b,&f,&r,&v);
		b-=1;
		f-=1;
		r-=1;
		kami[b][f][r]+=v;
	}
		for(b=0;b<4;b++){
			for(f=0;f<3;f++){
				for(r=0;r<10;r++){
					
					printf(" %d",kami[b][f][r]);
				}
				printf("\n");
				
			}
			if(b<3){
			printf("####################\n");
			}
			
		}
		
	
	return 0;
}