#include <stdio.h>
#include <math.h>



#ifndef DEBUG 
#define fprintf (void)
#endif 

double absval(double x);

int main(void){
	int d[7];
	int c[7];
	
	int i,j,k,n;
	int rec=0;
	int top, front;
	char roll;
	char trash;
	
	for(i=1;i<7;i++){
		scanf("%d",&d[i]);
	}
	
	int turn[3][6]={{d[5],d[1],d[2],d[6],d[5],d[1]},
					{d[4],d[2],d[3],d[5],d[4],d[2]},
					{d[4],d[1],d[3],d[6],d[4],d[1]}};
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&top);
		scanf("%d",&front);
		
		for(j=0;j<3;j++){
			for(k=1;k<5;k++){
				if(top==turn[j][k]&&front==turn[j][k+1]){
					rec=1;
					break;
				}else if(top==turn[j][k]&&front==turn[j][k-1]){
					rec=-1;
					break;
				}
				fprintf(stdout,"%d:%d %d %d ,%d\n",j,turn[j][k],turn[j][k+1],turn[j][k-1],rec);
			}
			if(rec!=0){
				break;
			}
		}
		
		if(j==0){
			if(rec==1){
				printf("%d\n",d[3]);
			}else{
				printf("%d\n",d[4]);
			}
		}else if(j==1){
			if(rec==1){
				printf("%d\n",d[1]);
			}else{
				printf("%d\n",d[6]);
			}
		}else{
			if(rec==1){
				printf("%d\n",d[5]);
			}else{
				printf("%d\n",d[2]);
			}
		}
		rec=0;
	}
	
	return 0;
}