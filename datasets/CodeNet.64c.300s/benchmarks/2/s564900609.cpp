#include<stdio.h>

int main(void)
{
	int m=1,f=1,r=1,N;
	
	for(;m!=-1||f!=-1||r!=-1;){
		
		scanf("%d %d %d",&m,&f,&r);
		N=0;
		
		if(m==-1||f==-1){
			
			if(m==-1&&f==-1&&r==-1){}
			
			else printf("F");
			
		}
		N=m+f;
		if(m!=-1&&f!=-1){
			
			if(N>=80){
				
				printf("A");
			}
			else if(N>=65&&N<=80){
				
				printf("B");
				
			}
			else if(N>=50&&N<65){
				
				printf("C");
				
			}
			else if(N>=30&&N<50){
				
				if(r>=50){
					
					printf("C");
					
				}
				else printf("D");
				
			}
			else if(N<30){
				
				printf("F");
				
			}
		}
		if(m!=-1||f!=-1||r!=-1){
			printf("\n");
		}
		
	}
	return 0;
}