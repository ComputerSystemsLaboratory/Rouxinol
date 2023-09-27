#include<stdio.h>
int student[31];
int main(){
	int i,c;
	for(i=0;i<28;i++){
		scanf("%d",&c);
		student[c]=1;
	}
	for(c=1;c<=30;c++){
		if(student[c]==0){
			printf("%d\n",c);
		}
	}
	return 0;
}