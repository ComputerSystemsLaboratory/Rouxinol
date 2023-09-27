#include<stdio.h>
int main(){
	int hin[101] = { 0 };
	int a,b,i,most=0;
	
	while((scanf("%d", &a))!=EOF){
		hin[a]++;
	}
	for(i=1;i<101;i++){
		if(most<=hin[i]){
			most=hin[i];
		}
	}
	for(i=1;i<101;i++){
		if(hin[i]==most){
			printf("%d\n",i);
		}
	}
		
	return 0;
}