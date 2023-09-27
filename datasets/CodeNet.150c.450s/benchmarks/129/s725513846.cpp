#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,j,r,c,date[101][101]={0};
	char input[1024],*num;
	
	fgets(input,sizeof(input),stdin);
	sscanf(input,"%d %d",&r,&c);
	
	fgets(input,sizeof(input),stdin);
	num=strtok(input," ");
	date[0][0]=atoi(num);
	
	date[0][c]+=date[0][0];
	date[r][0]+=date[0][0];
	date[r][c]+=date[0][0];
	for(i=0;i<r;i++){
		if(i!=0){
			fgets(input,sizeof(input),stdin);
			num=strtok(input," ");
			date[i][0]=atoi(num);
			
			date[i][c]+=date[i][0];
			date[r][0]+=date[i][0];
			date[r][c]+=date[i][0];
		}
		for(j=1;j<c;j++){
			num=strtok(NULL," ");
			date[i][j]=atoi(num);
			
			date[i][c]+=date[i][j];
			date[r][j]+=date[i][j];
			date[r][c]+=date[i][j];
		}
	}
	
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			printf("%d",date[i][j]);
			if(j!=c){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}