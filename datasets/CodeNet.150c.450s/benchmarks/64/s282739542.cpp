#include <stdio.h>
#define SIZE 2001

char resultTable[SIZE];
int n,q,elems[20];

bool calc(int number,int sum,int index){
	if(sum == number){
		return true;
	}else if(sum > number || index == n)
		return false;
	else{
		return (calc(number,sum+elems[index],index+1) || calc(number,sum,index+1));
	}
}

bool judge(int number){
	if(resultTable[number] == 'y')
		return true;
	else if(resultTable[number] == 'n')
		return false;
	else{
		if(calc(number,0,0)){
			resultTable[number] = 'y';
			return true;
		}else{
			resultTable[number] = 'n';
			return false;
		}
	}
}

int main(){

	for(int i = 0;i < SIZE; i++) resultTable[i] = 's';

	scanf("%d",&n);
	for(int i = 0; i < n; i++) scanf("%d",&elems[i]);

	scanf("%d",&q);

	int tmp;
	for(int i = 0; i < q; i++){
		scanf("%d",&tmp);
		if(judge(tmp)){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
}