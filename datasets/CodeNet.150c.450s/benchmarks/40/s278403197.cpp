#include <stdio.h>
#include <math.h>



#ifndef DEBUG 
#define fprintf (void)
#endif 

double absval(double x);

int main(void){
	int dice[7];
	int cdice[7];
	int i,j;
	char roll;
	char trash;
	
	for(i=1;i<7;i++){
		scanf("%d",&dice[i]);
		cdice[i]=dice[i];
	}
	
	scanf("%c",&trash);
	
	while(scanf("%c",&roll)!=EOF){
		if(roll=='N'){
			dice[1]=cdice[2];
			dice[2]=cdice[6];
			dice[6]=cdice[5];
			dice[5]=cdice[1];
			for(i=1;i<7;i++){
				cdice[i]=dice[i];
			}
		}else if(roll=='E'){
			dice[1]=cdice[4];
			dice[3]=cdice[1];
			dice[6]=cdice[3];
			dice[4]=cdice[6];
			for(i=1;i<7;i++){
				cdice[i]=dice[i];
			}
		}else if(roll=='W'){
			dice[1]=cdice[3];
			dice[3]=cdice[6];
			dice[6]=cdice[4];
			dice[4]=cdice[1];
			for(i=1;i<7;i++){
				cdice[i]=dice[i];
			}
		}else if(roll=='S'){
			dice[1]=cdice[5];
			dice[2]=cdice[1];
			dice[6]=cdice[2];
			dice[5]=cdice[6];
			for(i=1;i<7;i++){
				cdice[i]=dice[i];
			}
		}else if(roll=='\n'){
			break;
		}
		for(i=1;i<7;i++){
			fprintf(stdout,"%d-",dice[i]);
		}
		fprintf(stdout,"\n");
	}
	
	printf("%d\n",dice[1]);
	
	return 0;
}