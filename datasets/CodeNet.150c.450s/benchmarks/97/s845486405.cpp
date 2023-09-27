#include<stdlib.h>
#include <string.h> 
#include <stdio.h>


int main(void){
	
	int square[2][200];
	int in_a=0;
	int in_b=0;
	int num=-1;
	int max_r,max_l,max_u,max_t;
	int ans_p[100];
	int ans_v[100];
	int i;
	int j;
	int k=0;
	
	
	while(1){
		
		for(i=0;i<2;i++){
			for(j=0;j<200;j++){
				square[i][j]=0;
			}
		
		}
		
		scanf("%d",&num);
		
		if(num==0){
				break;
		}
		
		if(num==1){
			ans_p[k]=1;
			ans_v[k]=1;
		}
			
		
		max_r=0;
		max_l=0;
		max_u=0;
		max_t=0;
		square[0][0]=0;
		square[1][0]=0;
		
		if(num!=1){
			for(i=1;i<num;i++){
				
				scanf("%d %d",&in_a,&in_b);
				
				switch(in_b){
					
					case 0: square[0][i]=square[0][in_a]-1;
					    	square[1][i]=square[1][in_a];
							break;
					case 1: square[0][i]=square[0][in_a];
					    	square[1][i]=square[1][in_a]-1;
							break;
					case 2: square[0][i]=square[0][in_a]+1;
					    	square[1][i]=square[1][in_a];
							break;
					case 3: square[0][i]=square[0][in_a];
					    	square[1][i]=square[1][in_a]+1;
							break;
				
				}
				
				if(max_l>square[0][i])max_l=square[0][i];
				if(max_r<square[0][i])max_r=square[0][i];
				if(max_t<square[1][i])max_t=square[1][i];
				if(max_u>square[1][i])max_u=square[1][i];
		
				
			}
			
			ans_p[k]=max_r-max_l+1;
			ans_v[k]=max_t-max_u+1;
		
			
		}
	
		k++;
		
	}
	ans_p[k]=-1;
	
	for(i=0;ans_p[i]!=-1;i++){
		printf("%d %d\n",ans_p[i],ans_v[i]);
	}
			
	
	

	return 0;
		
}