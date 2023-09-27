#include<cstdio>
#include<cctype>

int main(void){
	
	char num[1001];
	
	while(1) {
		scanf("%s", num);
		int sum = 0; 
		
		if(num[0] != '0'){
			int i = 0;
			while(num[i]){
				sum += num[i] - '0';
				i++;
			}
			printf("%d\n", sum);
		}
		else break;
	}
	
	return 0;
}