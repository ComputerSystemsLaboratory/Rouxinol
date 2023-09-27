#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
   	int a=0,b=0,x=0,y=0,z=0;
	int card[100][2]={};
	int total[2]={};
   	int diff=0;
	int result[4]={};
   	int finish=0;

	scanf("%d%d",&x,&y);
	while(finish==0){
	total[0]=0;
	total[1]=0;
	for(a=0;a<x;a++){
		scanf("%d",&card[a][0]);
		total[0]+=card[a][0];
//		printf("%d\n",card[a][0]);
	}
	for(b=0;b<y;b++){
		scanf("%d",&card[b][1]);
		total[1]+=card[b][1];
//		printf("%d\n",card[b][1]);
	}
	
	diff=total[0]-total[1];
//	printf("%d\n",diff);

	result[2]=0;
	result[3]=200;
	for(a=0;a<x;a++){
	for(b=0;b<y;b++){
		if((diff==((card[a][0]-card[b][1])*2))&&(result[3]>(card[a][0]+card[b][1]))){
			result[0]=card[a][0];
			result[1]=card[b][1];
			result[2]+=1;
			result[3]=card[a][0]+card[b][1];
		}	
	}
	}
	if(result[2]==0){printf("-1\n");}
	else{printf("%d %d\n",result[0],result[1]);}
	
	scanf("%d%d",&x,&y);
	if((x==0)&&(y==0)){finish=1;}

	}
	
	return 0;
}