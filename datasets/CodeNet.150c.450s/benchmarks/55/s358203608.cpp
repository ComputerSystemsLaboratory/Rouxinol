#include<cstdio>

int main(){
	
	char num[1000];
	
	while (1){
		scanf("%s", num);
		if (num[0]==48) break;
		int sum=0;
		int i=0;
		while(num[i]){
			sum += num[i] -48;
			i++;
		} 
		printf("%d\n", sum);
	}
	return 0;
}