#include <stdio.h>

#define N 100

struct pair{
	int n;
	char m;
};

int main(){
	int n,i;
	struct pair card[N];
	char space;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%c%d%c",&card[i].m,&card[i].n,&space);
	}
	struct pair bubble[N],sel[N];
	///////////////bubble//////////////////
	for(i=0;i<n;i++){
		bubble[i] = card[i];
	}
	int j;
	struct pair tmp;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(bubble[j].n < bubble[j-1].n){
				tmp=bubble[j];
				bubble[j] = bubble[j-1];
				bubble[j-1] = tmp;
			}
		}
	}
	////////////////selection///////
	int minj;
	for(i=0;i<n;i++){
		sel[i] = card[i];
	}
	for(i = 0;i < n -1; i++){
		minj = i;
		for(j = i+1; j< n;j ++){
			if(sel[j].n < sel[minj].n){
				minj = j;
			}
		}
		if(minj != i){
			tmp = sel[minj];
			sel[minj] = sel[i];
			sel[i] = tmp;
		}
	}
	for(i=0;i<n-1;i++){
		printf("%c%d ",bubble[i].m,bubble[i].n);
	}
	printf("%c%d\nStable\n",bubble[i].m,bubble[i].n);
	int flag=0;
	for(i=0;i<n-1;i++){
		if(sel[i].m != bubble[i].m) flag = 1;
		printf("%c%d ",sel[i].m,sel[i].n);
	}
	if(flag)printf("%c%d\nNot stable\n",sel[i].m,sel[i].n);
	else{printf("%c%d\nStable\n",sel[i].m,sel[i].n);}
	return 0;
}